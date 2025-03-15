#include<stdio.h>
int main(){
    int n,j;
    scanf("%d",&n);
    int a[n],a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n,j=0;i>0 && j<n;i--,j++){
        a1[j]=a[i];
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