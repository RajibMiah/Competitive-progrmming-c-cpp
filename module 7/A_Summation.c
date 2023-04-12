#include<stdio.h>

int main(){
    int n , sum = 0;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i< n ; i++){
        sum += arr[i];
    }
    if(sum >= 0){
         printf("%d" , sum);
    }else{
         printf("%d" , sum * -1);
    }
    return 0;
}