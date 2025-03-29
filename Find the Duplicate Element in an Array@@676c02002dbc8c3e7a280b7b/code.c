#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(v[i]==1){
            continue;
        }
    int c=0;
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            c+=1;
            v[j]=1;
        }
    }
    if(c>1){
        printf("%d",a[i]);
        v[i]=1;
    }
    }
}