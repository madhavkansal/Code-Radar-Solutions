#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

   
    scanf("%d", &decimal);

    // Handle the case when the number is 0
    if (decimal == 0) {
        printf("0\n");
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2; // Store the remainder (0 or 1)
        decimal = decimal / 2;    // Divide the number by 2
        i++;
    }

    // Print the binary representation in reverse order
   
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}