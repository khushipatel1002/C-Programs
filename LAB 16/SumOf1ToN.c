#include <stdio.h>

void main() {
    int num, sum = 0;

    printf("Enter The Number :");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        // printf("\n%d", i);
        sum += i;
    }

    printf("\nSum = %d", sum);
}