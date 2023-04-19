#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    char s[n];
    scanf("%s" , s);
    int ans = 0;
    for(int i = 0 ; i < n ; ++i){
        ans += s[i] - '0';
    }
    printf("%d\n", ans );
    return 0;
}