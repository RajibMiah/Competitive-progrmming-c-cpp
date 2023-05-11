#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d" , &n);
    int arr[n][n];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            scanf("%d" , &arr[i][j]);
        }
    }
    int a = 0  , b = 0;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j <= n ; ++j){
            if(i == j){
                a += arr[i][j];
            }
            if(  j == n-i ){
                b += arr[i][j - 1];
            }       
        }
    }
    printf("%d %d\n" , a , b);
    printf("%d\n" , abs(a) + abs(b));
    return 0;
}