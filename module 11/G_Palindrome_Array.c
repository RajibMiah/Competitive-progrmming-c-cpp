#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i< n ; ++i){
        scanf("%d" , &arr[i]);
    }
    int i = 0 ;
    int j =  n - 1;
    int flag = 1;
    while(i < j){
        if(arr[i] != arr[j]){
            flag = 0;
            break;
        }else{
            i++;
            j--;
        }
    }
    if(flag){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}