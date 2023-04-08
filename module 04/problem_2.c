#include<stdio.h>

int main(){
    int a , b;
    scanf("%d %d", &a , &b);
    if(a < b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(a % b == 0){
        printf("Multiples");
    }else{
        printf("No Multiples");
    }
    return 0;
}