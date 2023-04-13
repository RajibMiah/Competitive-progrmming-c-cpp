#include<stdio.h>

int main(){
    int n , even = 0 , odd = 0;
    scanf("%d" , &n);
    while (n--)
    {
        int v;
        scanf("%d" , &v);
        if(v % 2 == 0){
            even += v;
        }else{
            odd += v;
        }
    }
    printf("%d %d", even , odd);
    return 0;
}