#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=1;
    for(int i=0;i<n;i++){
        for (int j=1;j<n;j++){
            if(a[i]==a[j]){
                int k=0;
                continue;
            }
        }
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n+1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(k){
        printf("%d",a[1]);}
        else{
            printf("-1");
        }

}