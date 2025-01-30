#include <stdio.h>
int main(){
    scanf("%u",&a)
    if('a'<=a && a<='z'){
        if(a=='a'||a=='e'||a=='i',a=='o'||a=='u'){
        printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
   else if('A'<=a && a<='Z'){
        if(a=='A' || a=='E' || a=='I'||a=='O'||a=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(0<=a && a<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}