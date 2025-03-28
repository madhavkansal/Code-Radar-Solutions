#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1 j<n;j++){
            if(a[j]>a[i]){
                a[i]=a[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}