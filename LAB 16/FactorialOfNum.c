#include <stdio.h>

void main() {
    int num;

    printf("Enter The Number :");
    scanf("%d", &num);

    int fact = 1;

    for(int i = 1; i <= num; i++){
        fact *= i;
    }

    printf("\nFactorial of %d = %d", num, fact);
}