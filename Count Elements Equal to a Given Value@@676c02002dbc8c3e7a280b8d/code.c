#include<stdio.h>
int main(){
    int n,c=0,b;
    scanf("%d",&n);
    scanf("%d",&b);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==b){
            c+=1;
        }
    }
    printf("%d",c);}