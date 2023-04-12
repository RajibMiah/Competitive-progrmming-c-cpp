#include<stdio.h>

int main(){
    int n , num ;
    long long int sum = 0;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
        sum +=  arr[i];
    }
    if(sum >= 0){
         printf("%lld" , sum);
    }else{
         printf("%lld" , sum * -1);
    }
    return 0;
}