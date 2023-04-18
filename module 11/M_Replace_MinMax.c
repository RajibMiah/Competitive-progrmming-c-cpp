#include<stdio.h>

int main(){
    int n ;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int min_value = arr[0];
    int min_index = 0 ;
    for(int  i = 0 ; i < n ; ++i){
         if(min_value > arr[i]){
            min_value = arr[i];
            min_index = i;
        }
    }
    int max_value  = min_value , max_index;
    for(int  i = 0 ; i < n ; ++i){
        if( max_value < arr[i]){
            max_value = arr[i];
            max_index = i;
        }  
    }
    arr[max_index] = min_value;
    arr[min_index] = max_value;
    for(int  i= 0 ; i< n ; ++i){
        printf("%d " , arr[i]);
    }
   
    return 0;
}