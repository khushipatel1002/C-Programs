#include <stdio.h>

void main() {
    int num,revNum = 0;

    printf("Enter a Number :");
    scanf("%d",&num);

    while (num != 0){
        revNum = revNum*10 + num % 10;
        num = num / 10;
    }

    printf("\nReverse Number : %d", revNum);
}