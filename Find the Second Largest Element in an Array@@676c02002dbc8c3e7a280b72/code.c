#include<stdio.h>
int main(){
    int n,p=1;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n<=1){
        printf("-1");
    }
    else{
    for (int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            p=0;
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(p){
    printf("%d",a[1]);
    }
    else{
        printf("-1");
    }
    }
}