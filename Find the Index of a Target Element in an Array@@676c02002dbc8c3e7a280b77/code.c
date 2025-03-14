#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&i);
    }
    int m;
    scanf("%d",&m);
    int p=0
    for (int i=0;i<n;i++){
        if(m==a[i]){
            int x=i;
            p=1;
            break;
        }
    }
    if(p){
        printf("%d",x)
    }
    else{
        printf("-1");
    }
}