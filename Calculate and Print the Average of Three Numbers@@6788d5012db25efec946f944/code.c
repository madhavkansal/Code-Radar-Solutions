#include <stdio.h>
int main(){
    int a,b,c;
    float avg,avg1;
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    avg1= (-1)*(avg);
    if (avg>0){
    printf("Average: %.2f",avg);
    }
    else{
        printf("Average: %.2f",avg1)
    }
}