#include<stdio.h>

int main(){
    int row , col;
    scanf("%d %d" , &row , &col);
    if(row != col){
        printf("The matrixs is not scalar\n");
        return 0;
    }
    int arr[row][col];
    for(int  i = 0 ; i < row ;  ++i){
        for(int j  = 0 ; j < col ; ++j){
            scanf("%d" , &arr[i][j]);
        }
    }

    int is_diagonal = 1;
    int scalar_point = arr[0][0];
    for(int i = 0 ; i< row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            if((i != j)  && arr[i][j] != 0){
                is_diagonal = 0;
                break;
            }
            else if(( i == j ) && arr[i][j] != scalar_point ){
                is_diagonal = 0;
                break;
            }
        }
    }
    if(is_diagonal){
        printf("The matrixs is scalar\n");
    }else{
        printf("The matrixs is not scalar\n");
    }
    return 0;
}