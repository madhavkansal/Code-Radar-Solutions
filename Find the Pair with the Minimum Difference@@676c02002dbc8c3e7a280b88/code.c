#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int n, p, q;
    scanf("%d", &n);
    
    // Declare the array with size n
    int a[n];
    
    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Corrected to read into a[i] instead of n
    }
    
    // Initialize min to a large value
    int min_diff = INT_MAX; // Use INT_MAX to ensure we have a large initial value
    
    // Find the pair of elements with the minimum difference
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Start j from i + 1 to avoid comparing the same elements
            int diff = a[i] - a[j];
            if (diff < 0) diff = -diff; // Take the absolute value of the difference
            if (diff < min_diff) {
                min_diff = diff; // Update the minimum difference
                p = a[i]; // Store the pair
                q = a[j];
            }
        }
    }
    
    // Print the pair with the minimum difference
    printf("%d %d\n", p, q);
    return 0;
}#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int n, p, q;
    scanf("%d", &n);
    
    // Declare the array with size n
    int a[n];
    
    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Corrected to read into a[i] instead of n
    }
    
    // Initialize min to a large value
    int min_diff = INT_MAX; // Use INT_MAX to ensure we have a large initial value
    
    // Find the pair of elements with the minimum difference
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Start j from i + 1 to avoid comparing the same elements
            int diff = a[i] - a[j];
            if (diff < 0) diff = -diff; // Take the absolute value of the difference
            if (diff < min_diff) {
                min_diff = diff; // Update the minimum difference
                p = a[i]; // Store the pair
                q = a[j];
            }
        }
    }
    
    // Print the pair with the minimum difference
    printf("%d %d\n", p, q);
    return 0;
}