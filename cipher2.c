#include <stdio.h>
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

//char to binary - reversed
void printAsReversedBinary(unsigned char c) {
    printAsBinary(reversedChar(c));
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
            printAsReversedBinary(str[i]);
            printf(" = %d\n", reversedChar(str[i]));
            printf("\n");
        }
    }

    //print cipher
    printf("Cipher =  \"");
    for( int i = 0; i < 100; i++ ) {
        if(str[i] != 0) {
            printf("%c", reversedChar(str[i]));
        }
    }
    printf("\"\n");

    return 0;
}
