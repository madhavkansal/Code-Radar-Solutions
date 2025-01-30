#include <stdio.h>
int main(){
    int x,y,c;
    char o;
    scanf("%d %d %c",&x,&y,&o);
    switch(o){
        case "+":
        c=x+y
        printf("%d",c);
        break
        case '-':
        c=x-y:
        printf("%d",c);
        break;
        case '*':
        c=x*y;
        printf("%d",c);
        break;
        case '/':
        c=x/y;
        printf("%d",c);
        break;
    }
}