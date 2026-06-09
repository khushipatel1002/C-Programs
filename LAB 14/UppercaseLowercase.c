#include <stdio.h>

int main() {
    char ch;

    printf("Uppercase letters:\n");
    ch = 'A';
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }

    printf("\n\nLowercase letters:\n");
    ch = 'a';
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }

    return 0;
}
