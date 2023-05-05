#include<stdio.h>

int addTwoNumber(int a , int b){
    return a+b;
}

int subtructTwoNumber(void){
    int x , y;
    scanf("%d %d" , &x , &y);
    return x-y;
}

void multiplyTwoNumber(int a , int b){
    printf("Multiply of number %d and %d is : %d\n", a , b ,  a*b);
}

void dividTwoNumber(void){
    int x , y;
    scanf("%d %d" , &x , &y);
    printf("quotient  of number %d and %d is : %0.2f\n", x , y , ((float)x / y));
}

int main(){
    int a  , b ;
    scanf("%d %d" , &a , &b);
    int sum = addTwoNumber(a , b);
    printf("Sum of number %d and %d is : %d\n", a , b , sum);
    
    int deduce= subtructTwoNumber();
    printf("deduction of number %d and %d is : %d\n", a , b , deduce);

    multiplyTwoNumber(a , b);
    dividTwoNumber();
    return 0;
}
