#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p=0
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>=a[j+1] || a[j]<=a[j+1]){
                p=1;
            }
        }
    }
    if(p){
        printf("YES");

    }
    else{
        printf("NO");
    }
}