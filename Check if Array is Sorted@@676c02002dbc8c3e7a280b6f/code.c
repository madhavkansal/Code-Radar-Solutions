#include <stdio.h>

int main() {
    int n,p=0;
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j <n; j++) {
            if(arr[j] <= arr[j + 1]) {
                p=1;
            }
        }
    }
    if(p){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }

    return 0;
}