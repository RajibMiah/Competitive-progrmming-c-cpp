#include<stdio.h>

int main(){
    int n , min_num , index;
    scanf("%d" ,&n);
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d" ,&arr[i]);
    }
    min_num = arr[0];
    index = 0;
    for(int i = 1 ; i < n ; i++){
        if(min_num > arr[i]){
            min_num = arr[i];
            index = i;
        }
    }
    printf("%d %d", min_num , index + 1);
    return 0;
}