#include<stdio.h>

int main(){
    int t , max = 0;
    scanf("%d" ,&t);
    while(t--){
        int n;
        scanf("%d" , &n);
        if(max < n){
            max = n;
        }
    }
    printf("%d\n",max);
    return 0;
}