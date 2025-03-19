#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum,d;
    scanf("%d",&n);
    int a[n],a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum=0;
        int num=abs(a[i]);
        while(num!=0){
            d=num%10;
            sum+=d;
            num=num/10;
        }
        a1[i]=sum;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
        printf("%d ",a1[i]);
        }
        else{
            printf("%d ",-a1[i]);
        }
    }
}