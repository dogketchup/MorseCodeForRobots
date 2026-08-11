## idea
I want to be able to have a function that reads in a const char[],string, and parse it into a morse code object that will cout as a stream
morse code, dot is one pulse, slash is 3 pulses, space is 7 pulses
S = b1000 1000 1000 0000, hex code 0x8880
O = b1110 1110 1110 0000, E,E,E 0xEEE0
S = b1000 1000 1000 0000, 0x8880
morse letter should be 2 bytes or 16 bits
msb for a nibble can be reguarded as transmission end

SPACE -> 0000 0000 0000 0000 -> 0x0000
A -> 0000 0111 0111 0001 -> 0x0771
B -> 0001 0001 0001 0111 -> 0x1117
C -> 0001 0111 0001 0111-> 0x1717 
D -> 0000 0001 0001 0111-> 0x0117
E -> 0000 0000 0000 0001-> 0x0001
