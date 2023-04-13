#include<stdio.h>

int main(){
    int n , a ;
    scanf("%d" ,&n);
    int arr[n];
    for(int i = 0 ; i< n ; ++i){
        scanf("%d", &a);
        arr[i] = a;
    }
    int x , v;
    scanf("%d %d" ,&x ,&v);
    arr[x]=v;
    for(int i= n-1 ; i>=0 ; --i){
        printf("%d " ,arr[i]);
    }
    return 0;
}