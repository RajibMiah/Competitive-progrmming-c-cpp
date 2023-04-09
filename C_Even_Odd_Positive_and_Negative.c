#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int e = 0 , odd = 0 , p = 0 , n = 0;
    while(t--){
        int num;
        scanf("%d" , &num);
        if(num > 0){
            p++;
        }
        if(num < 0){
            n++;
        }
        if(num % 2 == 0){
            e++;
        }
        if(num % 2 != 0){
            odd++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", e, odd , p , n);
    return 0;
}