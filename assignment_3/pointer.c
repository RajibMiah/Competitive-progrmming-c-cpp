#include<stdio.h>

void pass_by_reference(int *ptr1 , int *ptr2){
    /*---------------------
        ASSIGNED VALUE BY DEREFERENCINGT .IT WILL CHANGE
        THE VALUE OF a and b VARIABLE WHICH IS NOT IN THE SCOPE 
        OF PASS_BY_REFERENCE FUNCITON.
    ----------------------------*/
    *ptr1 = 12;
    *ptr2 = 20;
}

int main(){
    int a = 10 , b = 5;
    printf("Before passed to the function the value of  a and b are : %d and %d\n" , a , b);
    pass_by_reference(&a , &b);
    printf("After passing to the function by reference the value of a and b are: %d and %d\n" , a , b);
    return 0;
}


// void pass_by_value(int a , int b){
//      a = 12;
//      b = 20;
//     printf("inside funtion value of a and b are: %d and %d\n" , a, b);
// }
// int main(){
//     int a = 10 , b = 5;
//     pass_by_value(a , b);
//     printf("inside main function value of a and b are: %d and %d\n" , a, b);
//     return 0;
// }