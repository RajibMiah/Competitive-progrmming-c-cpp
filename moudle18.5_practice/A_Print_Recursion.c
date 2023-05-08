#include<stdio.h>

int printFun(int n){
    if(n  < 1){
        return 0;
    }
    printf("I love Recursion\n");
    printFun(--n);
}

int main(){
    int  n;
    scanf("%d" , &n);
    printFun(n);
    return 0;
}