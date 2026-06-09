#include <stdio.h>

void main() {
    int num, x, y;

    printf("Enter The Base :");
    scanf("%d", &x);

    printf("Enter The Exponent :");
    scanf("%d", &y);

    int result = 1;

    for(int i = 1; i <= y; i++){
        result *= x;
    }

    printf("\n%d Raised to the Power %d = %d", x, y, result);
}