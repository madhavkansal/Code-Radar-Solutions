#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=(1<<b);
    int d=a^c;
    printf("%d",d);
}