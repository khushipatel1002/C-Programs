#include <stdio.h>

void main() {
    int num;

    printf("Enter Number :");
    scanf("%d", &num);

    int last_digit = num % 10;

    if(last_digit % 2 == 0){
        printf("Last Digit of %d is Even", num);    
    }else{
        printf("Last Digit of %d is Odd", num);
    }
}