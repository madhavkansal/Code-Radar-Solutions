#include<stdio.h>
int main(){
    int n,e=0,o=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        if(a[i]%2==0){
            e+=1;
        }
        else{
            o+=1;
        }
    }
    printf("%d %d",e,o);
}