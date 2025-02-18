#include <stdio.h>

int main() {
    unsigned int number;
    int count = 0;

    // printf("Enter a 32-bit unsigned integer: ");
    scanf("%u", &number);

    // Check each bit from the most significant to the least significant
    for (int i = 31; i >= 0; i--) {
        if ((number & (1U << i)) == 0) {
            count++;
        } else {
            break; // Stop counting when the first '1' is found
        }
    }

    printf("%d\n", count);

    return 0;
}