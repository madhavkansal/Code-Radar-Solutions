#include<stdio.h>
int main(){
    int n,nsp,nst;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        nsp++;
        for(j=1;j<=nst;j++){
            printf("*");
        }
        nst+=2;
    }
    printf("\n");
}