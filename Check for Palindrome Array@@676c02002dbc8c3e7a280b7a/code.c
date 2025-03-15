#include<stdio.h>
int main(){
    int n,j;
    scanf("%d",&n);
    int a[n],a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++){
        a1[i]=a[n-1-i];
    }
    int p=1;
    for(int i=0;i<n;i++){
    if(a[i]!=a1[i]){
    p=0;
    break;
    }
    }
    if(p){
        printf("YES");
    }
    else{
        printf("NO");
    }
}