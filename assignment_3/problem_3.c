#include<stdio.h>

int  count_before_zero(int *arr , int size){
    int count = 0;
    for(int i = 0 ; i < size ; ++i){
        if(arr[i] != 0 ){
            count += 1;
        }else{
            break;
        }
    }
   return count;
}

int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for (int  i = 0; i <n; i++){
        scanf("%d" , &i[arr]);
    }
    int ans = count_before_zero(arr , n);
    printf("%d" , ans);
    return 0;
}