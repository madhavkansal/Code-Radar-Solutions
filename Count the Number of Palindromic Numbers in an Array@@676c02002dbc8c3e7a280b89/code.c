#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        v[i]=0;
    }
    int c=0,p;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            continue;
        }
        while(a[i]>0){
        int d=a[i]%10;
         p=p*10+d;
        a[i]=a[i]/10;
        }
        if(p==a[i]){
            c+=1;
            v[i]=1;
        }
    }
    printf("%d",c);
}