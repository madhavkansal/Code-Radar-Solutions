#include <stdio.h>
int main(){
    int x,y,z,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<=c || a+c<=b || c+b<=a){
printf("Valid");    }
else{
    printf("Invalid");
}
    }