#include <stdio.h>
#include <string.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int freq[m+1];
    memset(freq, 0, sizeof(freq));
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
        if(arr[i] <= m){
            freq[arr[i]]++;
        }
    }
    for(int i = 1; i <= m; ++i){
        printf("%d\n", freq[i]);
        freq[i] = 0;
    }
    return 0;
}