#include<stdio.h>

int main(){
    int a , b , c;
    int n = 3;
    scanf("%d %d %d" , &a ,&b , &c);
    int arr[] = {a ,b , c};

    for(int i = 0 ; i<n ; ++i ){
        for(int j = i+1 ; j < n ; ++j){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0 ; i < n; ++i){
        printf("%d\n" , arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n" , a , b , c);
    return 0;
}
