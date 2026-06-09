#include <stdio.h>

void main() {
    int x, y, result = 1;

    printf("Enter Base(x) :");
    scanf("%d", &x);

    printf("Enter Exponent(y) :");
    scanf("%d", &y);

    int i = 1;

    while (i <= y){
        result *= x;
        i++;
    }
    
    printf("%d Raised to the Power %d = %d", x, y,result);
}