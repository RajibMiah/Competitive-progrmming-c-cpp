#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    int count = 0 ; 
    scanf("%s" , s);
    int len = strlen(s);
    for(int i = 0 ; i < len ; ++i){
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}