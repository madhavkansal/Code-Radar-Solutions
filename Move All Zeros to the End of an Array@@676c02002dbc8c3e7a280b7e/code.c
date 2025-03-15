#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            continue;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}