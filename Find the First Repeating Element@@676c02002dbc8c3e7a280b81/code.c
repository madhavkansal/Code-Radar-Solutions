#include<stdio.h>
int main(){
    int n,p,k=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   
    for(int i=0;i<n;i++){
        for (int j = i + 1; j < n; j++) {
        if(a[i]==a[j]){
            p=a[i];
            k=1;
            break;
        }
    }
}

    if(k){
        printf("%d",p);
    }
    else{
        printf("-1");
    }}