#include <stdio.h>
int main(){
    int a,b,c;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    if (avg!=0){
    printf("Average: %.2f",avg);
    }
    else{
        printf("Average: 0");
    }
}