#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int ans[n];
    for(int i = 0 ; i< n ; i++){
        scanf("%d", &arr[i]);
        ans[i] = 0;
    }
    for(int i = 0 ; i< n ; i++){
        ans[arr[i]]++;
    }
    for(int i  = 0 ; i< n ; ++i){
        if(ans[i] != 0){
            print("%d -- %d" , i , ans[i]);
        }
        ans[i] = 0;
    }
    return 0;
}