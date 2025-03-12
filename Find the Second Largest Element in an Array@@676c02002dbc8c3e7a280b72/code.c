#include <stdio.h>

int main() {
    int n, p = 1;
    scanf("%d", &n);
    int a[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check for duplicates
    for (int i = 0; i < n - 1; i++) { // Changed to n-1 to avoid out of bounds
        if (a[i] == a[i + 1]) {
            p = 0; // Set p to 0 if duplicates are found
            break; // No need to check further
        }
    }

    // Sort the array in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                // Swap a[j] and a[j + 1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Output the second largest element or -1 if duplicates were found
    if (p) {
        if (n > 1) {
            printf("%d\n", a[1]); // Print the second largest element
        } else {
            printf("-1\n"); // If there's only one element
        }
    } else {
        printf("-1\n"); // If duplicates were found
    }

    return 0;
}