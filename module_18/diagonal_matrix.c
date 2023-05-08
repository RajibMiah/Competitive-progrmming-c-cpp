#include<stdio.h>

int main(){
    int row , col;
    scanf("%d %d" , &row , &col);
    if(row != col){
        printf("The matrixs is not diagonal\n");
        return 0;
    }
    int arr[row][col];
    for(int  i = 0 ; i < row ;  ++i){
        for(int j  = 0 ; j < col ; ++j){
            scanf("%d" , &arr[i][j]);
        }
    }

    int is_diagonal = 1;
    for(int i = 0 ; i< row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            if(( i != j ) && (i+j) != row - 1 && arr[i][j] != 0){
                is_diagonal = 0;
                break;
            }
        }
    }
    if(is_diagonal){
        printf("The matrixs is diaognal\n");
    }else{
        printf("The matrixs is not diagonal\n");
    }
    return 0;
}