#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n],v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max,f=0;
    for(int i=0;i<n;i++){
        v[i]=0;
    }
    for(int i=0;i<n;i++){
        if(v[i]==1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c+=1;
                v[j]=1;
            }
        }
        if(c>f){
            f=c;
            max=a[i];
        }
    }
    printf("%d",max);
}