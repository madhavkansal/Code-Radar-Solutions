#include<stdio.h>
int main(){
    int n,j,c=0;
    scanf("%d",&n);
    int a[n],a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=a[n];j++){
            if(a[i]%j==0){
                c+=1;
            }
        }
    }
    printf("%d",c);
}