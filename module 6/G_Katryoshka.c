#include<stdio.h>
long long int min(long long int a, long long int b) {
    return a < b ? a : b;
}
int main(){
    long long int n , m , k , result = 0;
    scanf("%lld %lld %lld", &n , &m , &k);
    long long int min_val = min(n, min(m, k));
    result += min_val;
    n -= min_val;
    m -= min_val;
    k -= min_val;
    if(min_val != k){
        result += min(n/2 , k);
        printf("%lld" , result);
    }else{
        printf("%lld", k);
    }
    return 0;
}