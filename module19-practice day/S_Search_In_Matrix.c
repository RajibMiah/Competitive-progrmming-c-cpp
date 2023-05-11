#include<stdio.h>

int main(){
    int n , m;
    scanf("%d %d" , &n , &m);
    int arr[n][m];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            scanf("%d" ,&arr[i][j]);
        }
    }
    int x;
    scanf("%d" , &x);
    int is_true = 0 ;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            if(arr[i][j] == x){
                is_true = 1;
            }
        }
    }

    if(is_true){
        printf("will not take number\n");
    }else{
        printf("will take number\n");
    }
    return 0;
}