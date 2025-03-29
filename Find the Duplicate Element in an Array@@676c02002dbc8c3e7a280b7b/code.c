#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n],v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(v[i]==1){
            continue;
        }
    
    for(int j=i+1;j<n;j++){
        if(a[j]==a[j+1]){
            c+=1;
            v[j]=1;
        }
    }
    if(c>1){
        printf("%d",a[i]);
    }
    }
}