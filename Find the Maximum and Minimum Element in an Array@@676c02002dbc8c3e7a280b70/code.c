#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    for (int i=0;i<n-1;i++){
        for (int j=i;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d %d",a[0],a[0]);
        }