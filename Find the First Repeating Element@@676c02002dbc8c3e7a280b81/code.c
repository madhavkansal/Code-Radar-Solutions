#include<stdio.h>
int main(){
    int n,p,j=0;
    scanf("%d",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            p=a[i];
            j=1;
            break;
        }
    }
    if(j){
    printf("%d",p);
    }
    else{
        printf("-1");
    }
}