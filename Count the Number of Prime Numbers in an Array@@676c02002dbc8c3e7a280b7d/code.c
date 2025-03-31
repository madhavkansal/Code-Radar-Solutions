#include <stdio.h>

int main() {
    int n, c = 0;
    scanf("%d", &n);
    int a[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j*j<=a[i];j++){
            if(a[i]%j==0){
                c+=1;
            }
        }
    }
    printf("%d",c);
}