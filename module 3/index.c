#include<stdio.h>

int main(){
    int num , i;
    for(i =1; i<45; i++ ){
        printf("%d\n",i);
    }
    printf("end of line %d", i);
    return 0; 
}


// CONTINUE STATEMENT TUTOR
// int main(){
//     int num , i;
//     scanf("%d",&i);
//     for(i = 1; i<= 10; i=i+1){

//         // NOTE:: DO NOT DONE ANY KIND OF LOGICAL STATEMENT  ABOVE CONTINUE STATEMENT
//         if(i == 5){
//             continue;;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }


// BREAK STATEMENT IN C
// int main(){
//     int num , i;
//     scanf("%d",&i);
//     for(i = 1; i<= 10; i=i+1){
//         printf("%d\n", i);
//         if(i == 5){
//             break;
//         }
//     }
//     return 0;
// }

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