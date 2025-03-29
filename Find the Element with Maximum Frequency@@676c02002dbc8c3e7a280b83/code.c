#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n], v[n];
    
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Initialize the visited array
    for (int i = 0; i < n; i++) {
        v[i] = 0;
    }
    
    int max_freq = 0; // Variable to store maximum frequency
    int max_elem; // Variable to store the element with maximum frequency
    
    // Count frequencies of each element
    for (int i = 0; i < n; i++) {
        if (v[i] == 1) { // Skip if already counted
            continue;
        }
        
        int c = 1; // Start count at 1 for the current element
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                c += 1; // Increment count for duplicates
                v[j] = 1; // Mark this element as visited
            }
        }
        
        // Print the element and its count
        // printf("%d %d\n", a[i], c);
        
        // Check if this count is greater than the current maximum frequency
        if (c > max_freq) {
            max_freq = c; // Update maximum frequency
            max_elem = a[i]; // Update the element with maximum frequency
        }
    }
    
    // Print the element with maximum frequency
    printf("%d", max_elem);
    
    return 0; // Return statement to indicate successful completion
}