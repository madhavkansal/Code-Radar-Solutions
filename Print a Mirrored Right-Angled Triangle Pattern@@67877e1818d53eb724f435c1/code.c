#include<stdio.h>
int main(){
    int n,nst=1;
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=n;j++){
            printf("%*",a);
            
        a++;
        }
        nst+=1;
        printf("\n");
    }
    
}