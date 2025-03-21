#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],a1[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum;
    for (int i=0;i<n;i++){
        sum=a[i]+a[i+1];
        a[i]=a[i+1];
        a[i+1]=sum;
    }
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}