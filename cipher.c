#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//char to binary
void printAsBinary(unsigned char c) {
    for (int i = 7; i >= 0; i--)
    {
        putchar( (c & (1 << i)) ? '1' : '0' );
    }
}

//reverse char
char reversedChar(unsigned char c) {
    unsigned char reversed = 0;
    for (int i = 0; i <= 7; i++) {
        reversed = (reversed << 1) | ((char)c & 1);
        c >>= 1;
    }
    return reversed;
}

//Nibble-Swapped char
char nibbleSwappedChar(unsigned char c) {
    unsigned char temp1 = c >> 4;
    unsigned char temp2 = c << 4;
    unsigned char temp = temp1 | temp2;
    return temp;
}

//char to binary - flipped
void printAsFlippedBinary(unsigned char c) {
    for (int i = 7; i >= 0; --i)
    {
        putchar( (c & (1 << i)) ? '0' : '1' );
    }
}

//char to binary - reversed
void printAsReversedBinary(unsigned char c) {
    printAsBinary(reversedChar(c));
}

//char to binary - Nibble-Swap
void printAsNibbleSwapBinary(unsigned char c) {
    printAsBinary(nibbleSwappedChar(c));
}


int main() {

    //initial values
    char str[100];
    for(int i = 0; i < 100; i++){
        str[i] = 0;
    }

    //ask for user input
    printf("Please enter a String\n");
    scanf("%s", str);
    printf("\n");

    /* print binary and decimal number of each char */
    /* initial a random number r from 1 to 3        */
    /* when r = 1, flip the binary                  */
    /* when r = 2, reverse the binary               */
    /* when r = 3, nibble-swap the binary           */

    //initial random number and result char
    int r = rand()%3 + 1;
    unsigned char resultChar;

    for( int i = 0; i < 100; i++ ) {
        if(str[i] != 0){

            // print the original binary
            printAsBinary(str[i]);
            printf(" = %d\n", (int)str[i]);

            // print cipher binary
            if (r = 1){
                // flip
                printAsFlippedBinary(str[i]);
            } else if (r = 2){
                //reverse
                printAsReversedBinary(str[i]);
            } else {
                // nibble-swap
                printAsNibbleSwapBinary(str[i]);
            }

            // assign value to result char and print it out
            if (r = 1){
                // flip - do nothing
                printf(" = %d\n", ~str[i]);
            } else if (r = 2){
                //reverse
                reversedChar(str[i]);
                printf(" = %d\n", resultChar);
            } else {
                // nibble-swap
                nibbleSwappedChar(str[i]);
                printf(" = %d\n", resultChar);
            }
            printf("\n");
        }
    }

    //print cipher
    printf("Cipher =  \"");
    if (r = 1){ // flip
        for( int i = 0; i < 100; i++ ) {
            if(str[i] != 0) {
                printf("%c", ~str[i]);
            }
        }
    } else if (r = 2){ //reverse
        for( int i = 0; i < 100; i++ ) {
            if(str[i] != 0) {
                printf("%c", reversedChar(str[i]));
            }
        }
    } else { // nibble-swap
        for( int i = 0; i < 100; i++ ) {
            if(str[i] != 0) {
                printf("%c", nibbleSwappedChar(str[i]));
            }
        }
    }
    printf("\" \n");

    return 0;
}
