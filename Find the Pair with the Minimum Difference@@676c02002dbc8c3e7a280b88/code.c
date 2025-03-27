#include<stdio.h>
int main(){
    int n,p,q;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ;i<n;i++){
        scanf("%d",&n);
    }
    int min =a[i];
    for(int i=0 ;i<n;i++){
        for (int j=i ;j<n j++)
        if(a[i]-a[j]<min || a[j]-a[i]<min){
            p=a[i];
            q=a[j];
        }
    }
    printf("%d %d",p,q);
}