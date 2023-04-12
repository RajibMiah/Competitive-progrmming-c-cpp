#include<stdio.h>

int main(){
    int n , x;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i< n ; i ++){
        scanf("%d" , &arr[i]);
    }
    scanf("%d" , &x);
    for(int i = 0 ; i< n ; i++){
        if(x == arr[i]){
            printf("%d" , i);
            break;
        }else if( i == n- 1){
            printf("-1");
            break;
        }
    }
    return 0;
}