#include <stdio.h>
int main(){
    int a,b,sum;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        sum+=b;
    }
    printf("%d",sum);
}