#include<stdio.h>
int main(){
    int n,e=0,q=0,c=0,b=0;
    scanf("%d",&n);
    int a[n],a1[c];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            a1[i]=a[i];
            c+=1;
        }
    }
    if(c!=0){
    for(int i=0;i<c;i++){
        for(int j=0;j<c-1-i;j++){
            if(a1[j]<a1[j+1]){
                int temp =a1[j];
                a1[j]=a1[j+1];
                a1[j+1]=temp;
            }
        }
    }
    printf("%d",a[0]);
    }
    else{
        printf("-1");
    }
}