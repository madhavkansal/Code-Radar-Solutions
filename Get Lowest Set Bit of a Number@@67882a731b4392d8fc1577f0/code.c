#include <stdio.h>

int main() {
    unsigned int number;

    // Prompt the user for input
    scanf("%u", &number);

    // Calculate the lowest set bit
    unsigned int lowestSetBit = number & -number;

    // Check if the number has any set bits
    if (lowestSetBit) {
        printf("%u\n",number);
    } 

    return 0;
}