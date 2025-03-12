#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int visited[size]; // Array to keep track of visited elements

    // Initialize the visited array
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue; // Skip if already counted
        }

        int count = 1; // Count the frequency of arr[i]
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as visited
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}