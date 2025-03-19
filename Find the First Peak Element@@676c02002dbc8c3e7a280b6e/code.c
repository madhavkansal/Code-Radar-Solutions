#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, p;
    scanf("%d", &n);
    int a[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check for duplicates
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) { // Compare with all subsequent elements
            if (a[i] == a[j]) {
                printf("-1\n");
                return 0; // Exit the program
            }
        }
    }

    // Find the maximum element
    p = a[0]; // Initialize p with the first element
    for (int i = 1; i < n; i++) {
        if (a[i] > p) {
            p = a[i]; // Update p if a[i] is greater
        }
    }

    printf("%d\n", p);
    
    return 0;
}