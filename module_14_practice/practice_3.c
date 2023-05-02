#include<stdio.h>

void char_to_ascii(char s){
    printf("%d\n" , s);
}
void small_to_capital(char s){
    printf("%c\n", s - 32);
}
void capital_to_small(char s){
    printf("%c\n" , s + 32);
}
int main(){
    char s;
    scanf("%c" , &s);
    char_to_ascii(s);
    small_to_capital(s);
    capital_to_small(s);

    return 0;
}