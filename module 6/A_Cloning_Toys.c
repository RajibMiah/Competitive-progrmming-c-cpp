#include<stdio.h>

int main(){
    int a , b ;
    scanf("%d %d" , &a , &b);
    int original = 1  , copied = 0;
    
    while ((original+copied ) < ( a + b)){
        if(a > b && original < b){
            original++;
            copied++;
        }else{
            copied += 2;       
        }
    }
    if(a == copied && b == original){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

// 0   1
// 1   2
// 2   3
// 4   3
// 6   3    

// 0   1
// 1   2
// 3   2
// 5   2