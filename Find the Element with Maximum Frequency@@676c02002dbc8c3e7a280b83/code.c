#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n],v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        v[i]=0;
    }
    int max_ele,max_fre;
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
        if(c>max_fre){
            max_fre=c;
            max_ele=a[i];
        }

    }
    printf("%d",max_ele);
}