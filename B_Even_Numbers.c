 #include<stdio.h>
 
 int main(){
     int n;
     scanf("%d" , &n);
     if(n == 1){
        printf("-1");
     }
     for(int i = 2; i <= n ; i+=2){
        if(i % 2 == 0){
            printf("%d\n" , i);
        }
     }
     return 0;
 }