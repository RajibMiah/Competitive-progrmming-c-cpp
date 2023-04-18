#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d" , &t);
    while (t--)
    {
        char str[101];
        int count = 0;
        scanf("%s" , str);
        for(int  i = 0 ; i < strlen(str) ; ++i){
            count++;
        }
        if(count > 10){
            printf("%c%d%c\n",str[0],count - 2 , str[strlen(str) - 1]);
        }else{
            printf("%s\n" , str);
        }
    }
    
    return 0;
}