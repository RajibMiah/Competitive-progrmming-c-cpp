#include<stdio.h>

int main(){
    int row , col;
    scanf("%d %d" , &row , &col);
    int arr[row][col];
    for(int  i = 0 ; i < row ;  ++i){
        for(int j  = 0 ; j < col ; ++j){
            scanf("%d" , &arr[i][j]);
        }
    }
    int is_null = 1;
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            if(arr[i][j] != 0){
                is_null = 0;
                break;
            }
        }
    }
    if(is_null){
        printf("zero or null matrix\n");
    }else{
        printf("not a null matrix\n");
    }
    return 0;
}