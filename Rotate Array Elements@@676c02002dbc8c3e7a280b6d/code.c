#include<stdio.h>
int main(){
    int n,b;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(int i=n-b;i>=n;i--){
        printf("%d\n",a[n-i]);
    }
    for(int i=0;i<=b;i++){
        printf("%d\n",a[i]);
    }
}