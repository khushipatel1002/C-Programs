#include <stdio.h>

void main() {
    printf("ASCII TABLE\n");
    printf("------------------\n");
    printf("Character\tASCII Value\n");
    printf("------------------\n");

    for(int i = 0; i <= 255; i++){
        printf(" %c\t\t%d\n", i, i);
    }

}