#include<stdio.h>

int printEvenInx(int *arr , int size){
    if(size <= 0){
        return 0;
    }
    if(size % 2 == 0){
        return printEvenInx(arr , size -= 1);
    }
    printf("%d " , arr[size - 1]);
    return printEvenInx( arr , size -= 2);
}

int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        scanf("%d" , &arr[i]);
    }
    printEvenInx(arr , n);
    return 0;
}