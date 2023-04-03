#include<stdio.h>

// NESTED LOOP IN C
int main(){
    int a;
    scanf("%d" , &a);
    if(a >=10000){
        if(a > 20000){
            printf("Gucci Bag \n");
            printf("Gucci Belt");
        }else{
            printf("Gucci Bag");
        }
    }else if(a >= 5000){
        printf("Levis Bag");
    }else{
        printf("Something");
    }
    return 0;
}

// POSITIVE AND NEGETIVE PROBLEM
// int main(){
//     int a;
//     scanf("%d" , &a);
//     if(a >= 0){
//         printf("positive");
//     }else{
//         printf("negative");
//     }
//     return 0;
// }

// even odd
// int main(){
//     int a ;
//     scanf("%d" , &a);

//     if(a % 2 == 0 && a > 0){
//         printf("even");
//     }else{
//         printf("odd");
//     }
//     return 0;
// }

// arithmetic operation

// int main(){
//     int a , b;
//     scanf("%d %d", &a , &b);
//     printf("%d + %d = %d\n", a , b , a + b);
//     printf("%d - %d = %d\n" , a , b , a-b);
//     printf("%d * %d = %d\n" , a , b , a * b);
//     if (a > b){
//         printf("%d / %d = %0.2f\n", a , b , (float) a/ (float) b);
//     }else{
//         printf("%d / %d = %0.2f\n", b , a , (float) b / (float) a);
//     }
   
//     return 0;
// }

//simple print function

// int main(){
//     printf("Recently I heard that you've achieved 95% marks in your exam.\nThis is brilliant! \nI wish you'll shine in your life!\t\tGood luck with all the barriers(^) in you life.");
//     return 0;
// }