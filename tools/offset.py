#!/usr/bin/env python
'''
Simple script to convert 32bit offset to little endian hex representation.
'''
import sys

def print_usage():
    print("Usage: %s <offset>" % ( sys.argv[0] ))
    sys.exit(0)

if len(sys.argv) < 2:
    print_usage()
elif len(sys.argv[1])>10:
    print_usage()

mem=sys.argv[1]
print ('\\x%s\\x%s\\x%s\\x%s' % ( str(mem[-2:]), str(mem[-4:-2]), str(mem[-6:-4]), str(mem[-8:-6]) ))
