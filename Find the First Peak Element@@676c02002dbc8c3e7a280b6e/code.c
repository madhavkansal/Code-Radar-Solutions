#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,p;
    scanf("%d", &n);
    int a[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check for duplicates
    for (int i = 0; i < n-1; i++) {
        for (int j = i; j < n; j++) { // Compare with all subsequent elements
            if (a[j] == a[j+1]) {
                printf("-1\n");
                return 0; // Exit the program
            }
        }
        int n=0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1] && a[j]>a[j-1]) {
                p=a[j];
                if(p!=a[n-1]){
                break;
                }
                else{
                    n=1;
                    break;
                }
        }
    }
    if(n){
        printf("%d",a[n-1])
    }
    else{
    printf("%d\n", p);
    }
    return 0;
}}}