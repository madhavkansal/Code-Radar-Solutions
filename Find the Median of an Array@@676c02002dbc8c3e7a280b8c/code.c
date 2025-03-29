#include<stdio.h>
int main(){
    int n;
    scanf("%d",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p=(n-1)/2;
    if(n%2!=0){
        printf("%d",a[p]);
    }
}