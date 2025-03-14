#include<stdio.h>
int main*({
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&i);
    }
    int m;
    scanf("%d",&m);
    for (int i=0;i<n;i++){
        if(a[i]==m){
            printf("%d",i);
            break;
        }
        else{
            printf("-1");
        }
    }
})