#include<stdio.h>

int main(){
    int n;
    scanf("%d" ,&n);
    if(n <= 0){
        for(int i= (n * -1) ; i >= -1 ; --i){
            printf("%d ", i*-1);
        }
    }else{
        for(int i=1 ; i<=n ; ++i){
            printf("%d " , i);
        }
    }
    return 0;
}