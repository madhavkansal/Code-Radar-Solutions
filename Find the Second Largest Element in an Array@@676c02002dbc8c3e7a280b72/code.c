#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Check for valid input
    if (n <= 1) {
        printf("-1\n"); // If there's only one element or none
        return 0;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check if all elements are equal
    int allEqual = 1; // Flag to check if all elements are equal
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            allEqual = 0; // Found an element not equal to the first
            break; // No need to check further
        }
    }

    // If all elements are equal, print -1
    if (allEqual) {
        printf("-1\n");
        return 0;
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

    // Print the second largest element
    printf("%d\n", a[1]); // Print the second largest element

    return 0;
}