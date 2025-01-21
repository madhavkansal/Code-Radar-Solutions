#include <stdio.h>
int main(){
    int x,y,z,a,b,c;
    scanf("%d %d %d",&x,&y,&z);
    a=x*x;
    b=y*y;
    c=z*z;
    if(a+b<=z){

printf("Valid");    }
else{
    printf("Invalid");
}
    }