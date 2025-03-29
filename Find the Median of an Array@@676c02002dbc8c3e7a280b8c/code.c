#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    if(n%2!=0){
        int p=(n-1)/2;
        printf("%d",a[p]);
    }
    else{
        int p=(n-1)/2;
        int q=p+1;
        int g=(a[p]+a[q])/2;
        printf("%d",g);
    }
}