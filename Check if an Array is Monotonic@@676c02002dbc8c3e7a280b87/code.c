#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int p=0;
    if(n>1){#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int isAscending = 1; // Flag for ascending order
    int isDescending = 1; // Flag for descending order

    // Check if the array is sorted in ascending or descending order
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            isAscending = 0; // Not ascending
        }
        if (a[i] < a[i + 1]) {
            isDescending = 0; // Not descending
        }
    }
    
    // If either flag is still true, the array is sorted
    if (isAscending || isDescending) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0; // Return statement to indicate successful completion
}
    else{
        printf("YES");
    }
}