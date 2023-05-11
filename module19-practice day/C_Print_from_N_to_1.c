#include<stdio.h>

int printFunc(int n){
    if(n <= 1){
        printf("1");
        return 0;
    }
    printf("%d " , n);
    return printFunc(n-1);
}

int main(){
    int n;
    scanf("%d" ,&n);
    printFunc(n);
    return 0;
}