#include <stdio.h>

void main() {
    int num, i = 0;

    printf("Enter a Number :");
    scanf("%d", &num);

    int last_digit = num % 10;
    int first_digit = num;

    while (first_digit >= 10){
        first_digit /= 10;
    }
 
    printf("\nFirst Digit : %d", first_digit);
    printf("\nLast Digit : %d", last_digit);
    printf("\nSum of first and last digit : %d", (first_digit + last_digit));
}