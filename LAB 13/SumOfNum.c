#include <stdio.h>

void main() {
    int i = 1, num;

    printf("Enter a Number :");
    scanf("%d", &num);

    int sum = 0;

    while (i <= num){
        sum += i;
        i++;
    }
    
    printf("Sum of 1 to %d = %d", num, sum);
}