import struct, sys
sys.stdout.reconfigure(encoding='utf-8', errors='replace')

def read_variable_int(allow3bytes, data, pos):
    result = 0
    i = 0
    while pos < len(data):
        b = data[pos]
        pos += 1
        if not allow3bytes and i == 1:
            return (result + 0x80) | b, pos
        result |= b & 0x7F
        if (b & 0x80) == 0:
            return result, pos
        result <<= 7
        i += 1
    return result, pos

def timebase(b):
    return {0x00:1, 0x01:2, 0x02:4, 0x03:5, 0x10:10, 0x11:20, 0x12:40, 0x13:50}.get(b, 2)

NOTE_NAMES = ['C','C#','D','D#','E','F','F#','G','G#','A','A#','B']
def note_name(n):
    return NOTE_NAMES[n%12] + str(n//12 - 1)

def parse_mtsq_hps(data, label, max_evts=50):
    print(f'--- {label} (HandyPhoneStandard) ---')
    pos = 0
    evt = 0
    SHORT_MOD = [0,0,8,16,24,32,40,48,56,64,72,80,96,112,127,127]
    SHORT_EXP = [0,0,31,39,47,55,63,71,79,87,95,103,111,119,127,127]
    while pos < len(data):
        if len(data) - pos == 4:
            eos = struct.unpack('>I', data[pos:pos+4])[0]
            if eos == 0:
                print(f'  [End marker: 0x00000000]')
                break
        dur, pos = read_variable_int(False, data, pos)
        if pos >= len(data): break
        b = data[pos]; pos += 1
        if b == 0xFF:
            if pos >= len(data): break
            b2 = data[pos]; pos += 1
            if b2 == 0x00:
                print(f'  Evt{evt:3d}: dur={dur:5d} NOP')
            elif b2 == 0xF0:
                length, pos = read_variable_int(False, data, pos)
                length -= 1
                sx_data = data[pos:pos+length]; pos += length
                if pos < len(data) and data[pos] == 0xF7: pos += 1
                print(f'  Evt{evt:3d}: dur={dur:5d} SysEx({length}B): {sx_data.hex(" ")}')
            else:
                print(f'  Evt{evt:3d}: dur={dur:5d} Unknown 0xFF 0x{b2:02X}')
        elif b != 0:
            ch = b >> 6
            note = (b & 15) + ((b >> 4 & 3) + 3) * 12
            gate, pos = read_variable_int(False, data, pos)
            print(f'  Evt{evt:3d}: dur={dur:5d} Note  ch={ch} note={note:3d}({note_name(note)}) gate={gate}')
        else:
            if pos >= len(data): break
            sig2 = data[pos]; pos += 1
            ch = sig2 >> 6
            msg = sig2 & 0x3F
            if msg == 0x00:
                if pos >= len(data): break
                fine = data[pos]; pos += 1
                print(f'  Evt{evt:3d}: dur={dur:5d} FineTune ch={ch} val={fine}')
            elif 0x01 <= msg <= 0x0E:
                print(f'  Evt{evt:3d}: dur={dur:5d} Expression ch={ch} val={SHORT_EXP[msg]}')
            elif 0x11 <= msg <= 0x1E:
                print(f'  Evt{evt:3d}: dur={dur:5d} PitchBend ch={ch} val={(msg-0x10)*1024}')
            elif 0x21 <= msg <= 0x2E:
                print(f'  Evt{evt:3d}: dur={dur:5d} Modulation ch={ch} val={SHORT_MOD[msg-0x20]}')
            elif msg == 0x30:
                if pos >= len(data): break
                val = data[pos]; pos += 1
                print(f'  Evt{evt:3d}: dur={dur:5d} ProgChange ch={ch} prog={val}')
            elif msg == 0x31:
                if pos >= len(data): break
                val = data[pos]; pos += 1
                print(f'  Evt{evt:3d}: dur={dur:5d} BankSelectLSB ch={ch} val={val}')
            elif msg == 0x37:
                if pos >= len(data): break
                val = data[pos]; pos += 1
                print(f'  Evt{evt:3d}: dur={dur:5d} Volume ch={ch} val={val}')
            elif msg == 0x3A:
                if pos >= len(data): break
                val = data[pos]; pos += 1
                print(f'  Evt{evt:3d}: dur={dur:5d} Panpot ch={ch} val={val}')
            elif msg == 0x3B:
                if pos >= len(data): break
                val = data[pos]; pos += 1
                print(f'  Evt{evt:3d}: dur={dur:5d} Expression ch={ch} val={val}')
            else:
                print(f'  Evt{evt:3d}: dur={dur:5d} Control msg=0x{msg:02X} ch={ch}')
        evt += 1
        if evt >= max_evts:
            print('  ...(truncated)')
            break
    print()

def parse_mtsq_mobile(data, label, max_evts=50):
    print(f'--- {label} (MobileStandard / Type 2) ---')
    pos = 0
    last_vel = [64]*16
    evt = 0
    while pos < len(data):
        if len(data) - pos == 4:
            eos = struct.unpack('>I', data[pos:pos+4])[0]
            if eos == 0:
                print(f'  [End marker: 0x00000000]')
                break
        dur, pos = read_variable_int(True, data, pos)
        if pos >= len(data): break
        b = data[pos]; pos += 1
        ch = b & 0x0F
        st = b & 0xF0
        if st in (0x80, 0x90):
            note = data[pos]; pos += 1
            if st == 0x90:
                vel = data[pos]; pos += 1
                last_vel[ch] = vel
            else:
                vel = last_vel[ch]
            gate, pos = read_variable_int(True, data, pos)
            nm = 'NoteOn ' if st == 0x90 else 'NoteOff'
            print(f'  Evt{evt:3d}: dur={dur:5d} {nm} ch={ch} note={note:3d}({note_name(note)}) vel={vel} gate={gate}')
        elif st == 0xB0:
            cc = data[pos]; pos += 1
            val = data[pos]; pos += 1
            ccn = {0:'BankMSB',32:'BankLSB',64:'Sustain',91:'Reverb',100:'RPNLSB',101:'RPNMSB'}.get(cc, f'CC#{cc}')
            print(f'  Evt{evt:3d}: dur={dur:5d} CC     ch={ch} {ccn} val={val}')
        elif st == 0xC0:
            prog = data[pos]; pos += 1
            print(f'  Evt{evt:3d}: dur={dur:5d} ProgChg ch={ch} prog={prog}')
        elif st == 0xD0:
            val = data[pos]; pos += 1
            print(f'  Evt{evt:3d}: dur={dur:5d} ChanPress ch={ch} val={val}')
        elif st == 0xE0:
            lsb = data[pos]; pos += 1
            msb = data[pos]; pos += 1
            print(f'  Evt{evt:3d}: dur={dur:5d} PitchBend ch={ch} ({lsb},{msb})')
        elif b == 0xF0:
            length, pos = read_variable_int(True, data, pos)
            length -= 1
            sx = data[pos:pos+length]; pos += length
            if pos < len(data) and data[pos] == 0xF7: pos += 1
            print(f'  Evt{evt:3d}: dur={dur:5d} SysEx({length}B): {sx.hex(" ")}')
        elif b == 0xFF:
            if pos < len(data):
                s = data[pos]; pos += 1
                if s == 0x00:
                    print(f'  Evt{evt:3d}: dur={dur:5d} NOP')
                elif s == 0x2F:
                    if pos < len(data) and data[pos] == 0x00: pos += 1
                    print(f'  Evt{evt:3d}: dur={dur:5d} EndOfTrack')
                    break
                else:
                    print(f'  Evt{evt:3d}: dur={dur:5d} Meta type=0x{s:02X}')
        else:
            print(f'  Evt{evt:3d}: dur={dur:5d} Unknown 0x{b:02X}')
        evt += 1
        if evt >= max_evts:
            print('  ...(truncated)')
            break
    print()

def parse_mtsu(data):
    p = 0
    evt = 0
    while p < len(data):
        sig = data[p]; p += 1
        if sig == 0xFF:
            if p < len(data):
                sig2 = data[p]; p += 1
                if sig2 != 0xF0:
                    continue
        if sig == 0xF0:
            length = data[p]; p += 1
            length -= 1
            sx = data[p:p+length]; p += length
            if p < len(data) and data[p] == 0xF7: p += 1
            print(f'    Exclusive {evt}: data={sx.hex(" ")}')
            if len(sx) >= 6 and sx[0] == 0x43 and sx[1] == 0x03:
                print(f'      VMA FM Voice: bank={sx[3]} pc={sx[4]}')
            elif len(sx) >= 10 and sx[0] == 0x43 and sx[1] == 0x79:
                vm_type = 'VM5' if sx[2] == 0x07 else ('VM3' if sx[2] == 0x06 else f'0x{sx[2]:02X}')
                print(f'      VM3/5 Voice ({vm_type}): bankMSB={sx[5]} bankLSB={sx[6]} pc={sx[7]} drumNote={sx[8]}')
            evt += 1

def parse_mmf(filepath, label):
    print('=' * 80)
    print(f'FILE: {label}')
    print('=' * 80)
    data = open(filepath, 'rb').read()
    msz = struct.unpack('>I', data[4:8])[0]
    print(f'MMMD: 0x0000, size={msz}')

    # CNTI
    cnti_sz = struct.unpack('>I', data[0xC:0x10])[0]
    cnti_data = data[0x10:0x10+min(cnti_sz, 80)]
    txt = cnti_data.decode('ascii', errors='replace')
    print(f'  CNTI: 0x0008, size={cnti_sz}')
    print(f'    Raw: {cnti_data.hex(" ")}')
    if ',' in txt:
        print(f'    Fields: {txt}')

    pos = 8
    while pos < 8 + msz and pos + 8 <= len(data):
        sig = data[pos:pos+4]
        sz = struct.unpack('>I', data[pos+4:pos+8])[0]
        sig_str = sig.decode('ascii', errors='replace')

        if sig_str[:3] == 'MTR':
            ver = sig[3]
            hdr = pos + 8
            fmt = data[hdr]; seq = data[hdr+1]; tb_d = data[hdr+2]; tb_g = data[hdr+3]
            fmt_names = {0:'HPS',1:'MobileStdCompr',2:'MobileStdNonCompr'}
            print(f'  MTR+0x{ver:02X}: 0x{pos:04X}, size={sz}')
            print(f'    Header: fmt={fmt}({fmt_names.get(fmt,"?")}) seq={seq} timebase_d={tb_d}({timebase(tb_d)}ms) timebase_g={tb_g}({timebase(tb_g)}ms)')

            ch_types = ['NoCare','Melody','NoMelody','Rhythm']
            if fmt == 0:  # HPS: 2-byte channel status for 4 channels
                b16 = struct.unpack('>H', data[hdr+4:hdr+6])[0]
                print(f'    Channel Status (2 bytes, 4 channels):')
                for c in range(4):
                    kc = (b16 >> (15 - c*4)) & 1
                    vib = (b16 >> (14 - c*4)) & 1
                    ct = (b16 >> (12 - c*4)) & 3
                    print(f'      Ch{c}: KeyCtrl={kc+1} Vib={vib} Type={ch_types[ct]}')
                sub_pos = hdr + 6
            else:  # MobileStd: 16 bytes, one per channel
                print(f'    Channel Status (16 bytes):')
                for c in range(16):
                    b = data[hdr+4+c]
                    print(f'      Ch{c:2d}: KeyCtrl={b>>6} Vib={(b>>5)&1} LED={(b>>4)&1} Type={ch_types[b&3]}')
                sub_pos = hdr + 4 + 16

            while sub_pos < pos + 8 + sz and sub_pos + 8 <= len(data):
                sc_sig = data[sub_pos:sub_pos+4].decode('ascii', errors='replace')
                sc_sz = struct.unpack('>I', data[sub_pos+4:sub_pos+8])[0]
                print(f'    {sc_sig}: 0x{sub_pos:04X}, size={sc_sz}')

                if sc_sig == 'Mtsu':
                    parse_mtsu(data[sub_pos+8:sub_pos+8+sc_sz])
                elif sc_sig == 'Mtsq':
                    if fmt == 0:
                        parse_mtsq_hps(data[sub_pos+8:sub_pos+8+sc_sz], f'  Track Mtsq', max_evts=40)
                    else:
                        parse_mtsq_mobile(data[sub_pos+8:sub_pos+8+sc_sz], f'  Track Mtsq', max_evts=40)
                elif sc_sig == 'MspI':
                    msp = data[sub_pos+8:sub_pos+8+sc_sz]
                    txt = msp.decode('ascii', errors='replace')
                    print(f'      Text: {txt}')
                elif sc_sig == 'Mtsp':
                    print(f'      (Wave/PCM stream data, {sc_sz} bytes)')

                sub_pos += 8 + sc_sz
            print()
        pos += 8 + sz

# Run parsers
parse_mmf(
    'D:/working/vscode-projects/Reference_Project/RP2350-Reference/smaf_20260516/libsmaf/ringtones/MA-3 MMF files/Cosmic.mmf',
    'Cosmic.mmf (MA-3 / MobileStandard)')

parse_mmf(
    'D:/working/vscode-projects/Reference_Project/RP2350-Reference/smaf_20260516/libsmaf/ringtones/LGRingTonesMMF/Melody/A Walk.mmf',
    'LG - A Walk.mmf (HandyPhoneStandard)')

parse_mmf(
    'D:/working/vscode-projects/Reference_Project/RP2350-Reference/smaf_20260516/libsmaf/ringtones/Sharp GX25 ringtones/Sound_10.mmf',
    'Sharp GX25 - Sound_10.mmf (HandyPhoneStandard)')
