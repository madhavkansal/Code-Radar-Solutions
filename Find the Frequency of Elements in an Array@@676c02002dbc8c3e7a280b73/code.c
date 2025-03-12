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
    
    // Count frequencies of each element
    for (int i = 0; i < n; i++) {
        if (v[i] == 1) { // Corrected from '=' to '=='
            continue; // Skip if already counted
        }
        
        int c = 1; // Start count at 1 for the current element
        for (int j = i + 1; j < n; j++) { // Corrected loop to start from i + 1
            if (a[i] == a[j]) {
                c += 1; // Increment count for duplicates
                v[j] = 1; // Mark this element as visited
            }
        }
        
        // Print the element and its count
        printf("%d %d\n", a[i], c);
    }
    
    return 0; // Return statement to indicate successful completion
}