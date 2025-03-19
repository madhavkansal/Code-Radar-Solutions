#include <stdio.h>

int main() {
    int n, c = 0;
    scanf("%d", &n);
    int a[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check each number in the array
    for (int i = 0; i < n; i++) {
        int isPrime = 1; // Assume the number is prime
        if (a[i] < 2) {
            isPrime = 0; // Numbers less than 2 are not prime
        } else {
            for (int j = 2; j * j <= a[i]; j++) {
                if (a[i] % j == 0) {
                    isPrime = 0; // Found a divisor, not prime
                    break;
                }
            }
        }
        if (isPrime) {
            c++; // Count the prime number
        }
    }

    printf("%d\n", c); // Print the count of prime numbers
    return 0;
}