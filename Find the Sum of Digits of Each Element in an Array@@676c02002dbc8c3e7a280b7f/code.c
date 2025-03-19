#include<stdio.h>
int main(){
    int n,sum,d;
    scanf("%d",&n);
    int a[n],a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum=0;
        while(a[i]!=0){
            d=a[i]%10;
            sum+=d;
            a[i]=a[i]/10;
        }
        a1[i]=sum;
    }
    for(int i=0;i<n;i++){
        if(a1[i]>=0){
        printf("%d ",a1[i]);
        }
        else{
            printf("%d ",-a1[i]);
        }
    }
}