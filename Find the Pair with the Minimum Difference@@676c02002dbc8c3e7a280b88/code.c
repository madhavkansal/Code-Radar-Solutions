#include<stdio.h>
int main(){
    int n,p,q,d;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min = a[0];
    for(int i=0 ;i<n;i++){
        for (int j=i+1 ;j<n ;j++){
        d=a[i]-a[j];
        if(d<0){
            d=-d;
        }
        if(d<min){
            p=a[i];
            q=a[j];
        }
    }}
    printf("%d %d",p,q);
}