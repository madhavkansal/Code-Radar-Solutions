#include <stdio.h>
#include <math.h>
int main(){
    int x,y,c;
    scanf("%d %d",&x,&y);
    c=y*y;
    if (c==x){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}