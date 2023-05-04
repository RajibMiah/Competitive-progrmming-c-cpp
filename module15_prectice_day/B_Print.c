#include<stdio.h>

void printFun(int n){
    for(int i = 1 ; i<= n ; ++i){
        printf("%d" , i);
        if(i != n){
            printf(" ");
        }
    }
}

int main(){
    int n;
    scanf("%d" , &n);
    printFun(n);
    return 0;
}