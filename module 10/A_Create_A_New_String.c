#include<stdio.h>
#include<string.h>

int main(){
    char s[1000] ;
    char t[1000];
    scanf("%s", s);
    scanf("%s" , t);
    printf("%d %d\n" , strlen(s) ,  strlen(t));
    printf("%s %s\n" , s , t);
    return 0;
}