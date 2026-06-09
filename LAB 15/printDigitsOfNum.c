#include <stdio.h>

void main() {
    int num,i = 0, digit, digits[10];

    printf("Enter a Number :");
    scanf("%d",&num);

    while (num > 0){
        digits[i] = num % 10;
        num = num / 10;
        i++;
    }

    printf("\nDigits of Num :\n");
    for(int j = i - 1; j >= 0; j--){
        printf("%d ", digits[j]);
    }
    
}