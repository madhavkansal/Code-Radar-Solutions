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
    if(len(set(a))==1){
        printf("1");
    }
    else{
    int c=1;
    for (int i=0;i<n;i++){
        if(a[i]+1 == a[i+1]){
            c+=1;
        }
    }
    printf("%d",c);
    }
}