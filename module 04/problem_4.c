#include<stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
   
    if((n/1000)% 2 == 0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }

    //  while(n > 0){
    //     rem = n % 10;
    //     n /= 10;
    // }

    return 0;
}

