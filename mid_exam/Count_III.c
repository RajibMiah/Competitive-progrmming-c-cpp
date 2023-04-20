#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000000

int main() {
    char c;
    int freq[26] = {0};
    while(scanf("%c" , &c) != EOF){
        freq[c- 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        printf("%c - %d\n", i + 'a', freq[i]);
    }

    return 0;
}