#include<stdio.h>
int main(){
    int n,b;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for (int i=b;i>0;i--){
        printf("%d ",a[n-i]);
    }
    for (int i=0;i<n-b;i++){
        printf("%d ",a[i]);
    }
}