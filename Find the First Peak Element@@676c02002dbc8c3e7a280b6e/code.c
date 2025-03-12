#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check for duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Compare with all subsequent elements
            if (a[i] == a[j]) {
                printf("-1\n");
                return 0; // Exit the program
            }
        }
    }

    // Bubble sort in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                // Swap a[j] and a[j + 1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    // Print the largest element
    printf("%d\n", a[0]);
    
    return 0;
}