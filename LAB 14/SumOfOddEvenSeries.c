#include <stdio.h>

void main() {
    int num, i = 1, sum = 0;

    printf("Enter a Number :");
    scanf("%d",&num);

    while (i <= num){
        if(i % 2 == 0){
            printf(" - %d", i);
            sum = sum - i;
        }else{
            printf(" + %d", i);
            sum = sum + i;
        }
        i++;
    }
    printf("\nSum = %d", sum);
}