#include<stdio.h>
#include<string.h>

int is_palindrome(char s[]){
    int i = 0 ;
    int j = strlen(s)-1;
    while (i <= j)
    {
        if(s[i] != s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main(){
    char str[10];
    scanf("%s" , str);
    int boolean = is_palindrome(str);
    if(boolean){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}