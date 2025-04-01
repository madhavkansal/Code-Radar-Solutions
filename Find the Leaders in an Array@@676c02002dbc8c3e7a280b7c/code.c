#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            if(a[i]>a[j]){
                max=a[i];
                continue;
                
            }
            
        }
       printf("%d ",max);
    }
}