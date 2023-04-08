#include<stdio.h>

int main(){
    int n, rem ;
    scanf("%d",&n);
    while(n > 0){
        rem = n % 10;
        n /= 10;
    }
    if(rem % 2 == 0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
    return 0;
}