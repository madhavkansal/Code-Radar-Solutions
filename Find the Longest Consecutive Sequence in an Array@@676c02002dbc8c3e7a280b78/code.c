#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int p=1;
    int c=1;
    for (int i=0;i<n;i++){
        if(a[i] !=a[0]){
        if(a[i]+1 == a[i+1]){
            c+=1;
        }
        }
        else{
            p=0;
        }
    }
    if (p)
    printf("%d",c);
    else{
        printf("1");
    }
}