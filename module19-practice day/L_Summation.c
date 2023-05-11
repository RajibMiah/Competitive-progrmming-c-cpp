#include<stdio.h>

long long int printSummation( int *arr , int size , long long int sum ){
    if(size <= 0){
        return sum;
    }
    sum += arr[size - 1];

    return printSummation(arr , size-1 , sum);
}

int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        scanf("%d" , &arr[i]);
    }
    long long int sum = 0;
    long long int ans = printSummation(arr , n , sum);
    printf("%lld\n" , ans);
    return 0;
}