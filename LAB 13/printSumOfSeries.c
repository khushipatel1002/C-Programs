#include <stdio.h>

void main() {
    int i = 1, result = 1, sum = 0;

    while (i <= 10) {
        result = i*i;
        printf("%d + ", result);
        sum += result;
        i++;
    }

    printf("\nSum = %d", sum);
}
