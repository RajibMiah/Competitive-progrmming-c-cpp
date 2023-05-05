#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;
    fgets(str, 100, stdin);
    int len = strlen(str);
    for (i = 0; i < len ; i++) {
        printf("%c ", str[i]);
    }

    return 0;
}