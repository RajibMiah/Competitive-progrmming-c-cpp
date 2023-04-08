#include<stdio.h>

int main(){
    char x;
    scanf("%c" ,&x);
    if((int) x >= 48 && (int)x <= 57 ){
        printf("IS DIGIT\n");
    }else if( (int) x >= 65 && (int) x <= 90){
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }else{
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    return 0;
}