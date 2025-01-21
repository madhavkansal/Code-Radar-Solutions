#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%4==0){
        if(x%100==0){
            if(x%400==0){
                printf("Leap Year");
            }
            else{
                printf("Not a Leap Year");
            }
        }
    else{
        printf("Leap Year");
    }
    }
    printf("Not a Leap Year");
}