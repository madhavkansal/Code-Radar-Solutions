#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m,x=0,y=0;
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]+a[j]==m){
                x=a[i];
                y=a[j];
                
        printf("%d %d\n",x,y);
            }
        }
    }
}