#include<stidio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        int v=0;
    }
    for (int i=0;i<n;i++){
        if(v=1){
            continue;
        }
        int c=0
        for(int j=0;j<n-i-1;j++){
            if(a[j]==a[j+1]){
                c+=1;
                v=1
            }
        }
        printf("%d %d",a[i],c);
    }
    }