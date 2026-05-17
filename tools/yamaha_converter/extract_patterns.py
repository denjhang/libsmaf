#!/usr/bin/env python3
"""
Extract strings and potential config structures from SSD.exe
"""

import sys
import struct
import re

def extract_strings(filename, min_len=4):
    """Extract ASCII strings from binary file"""
    strings = {}
    current = []
    with open(filename, 'rb') as f:
        data = f.read()

    for i, byte in enumerate(data):
        if 32 <= byte <= 126:  # Printable ASCII
            current.append(chr(byte))
        else:
            if len(current) >= min_len:
                s = ''.join(current)
                if s not in strings:
                    strings[s] = []
                strings[s].append(i - len(current))
            current = []

    return strings

def find_patterns(filename):
    """Find specific patterns in the binary"""
    with open(filename, 'rb') as f:
        data = f.read()

    print("=== Searching for CnvMA DLL names ===")
    dll_names = [b'CnvMA3SMF.dll', b'CnvMA5SMF.DLL', b'CnvMA2SMF.dll']
    for dll in dll_names:
        if dll in data:
            idx = data.index(dll)
            print(f"  Found {dll.decode()} at offset {hex(idx)}")

    print("\n=== Searching for VMA/VM3 file references ===")
    vma_refs = []
    for ext in [b'.vma', b'.vm3', b'VMA', b'VM3']:
        idx = 0
        while True:
            idx = data.find(ext, idx)
            if idx == -1:
                break
            # Extract context
            context = data[max(0, idx-20):idx+50]
            clean = ''.join(chr(b) if 32 <= b <= 126 else '.' for b in context)
            if clean not in vma_refs:
                vma_refs.append(clean)
            idx += 1

    for ref in vma_refs[:20]:  # Limit output
        print(f"  {ref}")

    print("\n=== Searching for function-like patterns ===")
    # Look for potential structure patterns (sequences of integers)
    for i in range(0, len(data) - 100, 4):
        chunk = data[i:i+20]
        # Check if this looks like a structure (multiple 4-byte integers)
        ints = []
        try:
            for j in range(0, min(20, len(chunk)), 4):
                if j + 4 <= len(chunk):
                    val = struct.unpack('<I', chunk[j:j+4])[0]
                    if val < 1000000:  # Reasonable value
                        ints.append(val)
        except:
            pass

        if len(ints) >= 4:
            print(f"  Potential struct at {hex(i)}: {ints[:8]}")

if __name__ == '__main__':
    ssd_path = r"D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\SSD.exe"
    find_patterns(ssd_path)
