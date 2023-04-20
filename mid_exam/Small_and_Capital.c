#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    int capital = 0 , small = 0;
    scanf("%s" , s);
    int len = strlen(s);
    for(int i = 0 ; i < len ; ++i){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            capital++;
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            small++;
        }
    }
    printf("%d %d" , capital , small);
    return 0;
}