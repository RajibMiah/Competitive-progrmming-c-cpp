#include<stdio.h>
void printNum( int n , int counter){
    if (counter > n){
        return ;
    }
    printf("%d\n", counter );
    printNum(n , counter += 1);
}
int main(){
    int n;
    scanf("%d" , &n);
    printNum(n ,  1);
    return 0;
}