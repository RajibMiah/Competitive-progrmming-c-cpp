#include<stdio.h>

int main(){
    int num , i;
    scanf("%d", &num);
    for (i=0 ; i<=num ; i++){
        if(i % 2 == 0){
            printf("%d--even\n", i);
        }else{
            printf("%d--odd\n", i);
        }
    }
    return 0;
}