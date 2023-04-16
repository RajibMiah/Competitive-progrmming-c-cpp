#include<stdio.h>

int main(){
    int max_n = 1000000;
    char s[max_n];
    int ans = 0;
    gets(s);
    for(int i = 0 ; s[i] != '\0' ; i++){
        ans += (s[i] - '0');
    }
    printf("%d\n",ans);
    return 0;
}