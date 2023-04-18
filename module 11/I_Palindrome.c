#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s" , s);
    int i = 0;
    int j =  strlen(s) - 1;
    int true = 1;
    while (i < j)
    {
        if(s[i] == s[j]){
            i++;
            j--;
        }else{
            true = 0;
            break;
        }   
    }
    if(true){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}