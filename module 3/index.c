#include<stdio.h>

// BREAK STATEMENT IN C
int main(){
    int num , i;
    scanf("%d",&i);
    for(i = 1; i<= 10; i=i+1){
        printf("%d\n", i);
        if(i == 5){
            break;
        }
    }
    return 0;
}

// LOOP WITH EVEN ODD
// int main(){
//     int num , i;
//     scanf("%d", &num);
//     for (i=0 ; i<=num ; i++){
//         if(i % 2 == 0){
//             printf("%d--even\n", i);
//         }else{
//             printf("%d--odd\n", i);
//         }
//     }
//     return 0;
// }