# Cipher
- C
- 4 types of ciphers
- understanding about bits

------------------
1. The Bit-Flip Cipher (cipher1.c)
- asking user for an input string
- the program should then create a cipher by taking each character of input and flipping the bits
- such as flip 'A' = 01000001 to 10111110 = '1/4'
- example output when user enter "ABC"

Please enter a String

ABC

01000001 = 65
10111110 = -66

01000010 = 66
10111101 = -67

01000011 = 67
10111100 = -68

Cipher =  "���"  //the cipher is "1/4 1/2 3/4" but it's displayed like this on the terminal window

------------------
2. The Bit-Reverse Cipher (cipher2.c)
- asking user for an input string
- the program should then create a cipher by taking each character of input and reverse the bits
- such as flip 'A' = 01000001 to 10000010 = 'é'
- example output when user enter "ABC"

Please enter a String

ABC

01000001 = 65
10000010 = -126

01000010 = 66
01000010 = 66

01000011 = 67
11000010 = -62

Cipher =  "�B�"  //the cipher is "éB┬" but it's displayed like this on the terminal window

------------------
3.The Nibble-Swap Cipher (cipher3.c)
- asking user for an input string
- the program should then create a cipher by taking each character of input
- and swaps the low 4 bits with the high 4 bits to get the cipher character
- such as flip 'B' = 01000010 to 00100100 = '$'
- example output when user enter "ABC"

Please enter a String

ABC

01000001 = 65
00010100 = 20

01000010 = 66
00100100 = 36

01000011 = 67
00110100 = 52

Cipher =  "$4" 

------------------
4. Random Cipher (cipher.c)
- asking user for an input string
- randomly makes use of the three ciphers above
