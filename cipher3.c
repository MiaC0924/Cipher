#include <stdio.h>
#include <math.h>

//char to binary
void printAsBinary(unsigned char c) {
    for (int i = 7; i >= 0; i--)
    {
        putchar( (c & (1 << i)) ? '1' : '0' );
    }
}

//Nibble-Swapped char
char nibbleSwappedChar(unsigned char c) {
    unsigned char temp1 = c >> 4;
    unsigned char temp2 = c << 4;
    unsigned char temp = temp1 | temp2;
    return temp;
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

    //print binary and decimal number of each char
    for( int i = 0; i < 100; i++ ) {
        if(str[i] != 0){
            printAsBinary(str[i]);
            printf(" = %d\n", (int)str[i]);
            printAsNibbleSwapBinary(str[i]);
            printf(" = %d\n", nibbleSwappedChar(str[i]));
            printf("\n");
        }
    }

    //print cipher
    printf("Cipher =  \"");
    for( int i = 0; i < 100; i++ ) {
        if(str[i] != 0) {
            printf("%c", nibbleSwappedChar(str[i]));
        }
    }
    printf("\"\n");

    return 0;
}
