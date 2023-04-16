#include<stdio.h>
#include<string.h>
int main(){
    int max_n = 1000000;
    char s[max_n];
    fgets(s , max_n , stdin);
    for(int i = 0 ; s[i] !='\0' ; i++){
        if(s[i] == '\\'){
            s[i] = '\0';
            break;
        }
    }
    printf("%s",s);
    return 0;
}