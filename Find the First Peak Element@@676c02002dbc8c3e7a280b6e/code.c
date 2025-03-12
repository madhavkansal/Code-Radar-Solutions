#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Bubble sort in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) { // Corrected 'i' to 'j' here
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