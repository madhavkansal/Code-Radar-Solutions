#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            p=1;
        }
    }
    if(p){
    printf("%d",a[0]*a[1]);
    }
    else{
        pri tf("%d",a[n-1]*a[n-2]);
    }
}