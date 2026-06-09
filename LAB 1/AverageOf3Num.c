#include <stdio.h>

void main(){
    int n1, n2, n3;

    printf("Enter First Number :");
    scanf("%d", &n1);

    printf("Enter Second Number :");
    scanf("%d", &n2);

    printf("Enter Third Number :");
    scanf("%d", &n3);

    float result = (n1 + n2 + n3) / 3.f;

    printf("Average of %d, %d and %d = %f", n1, n2, n3, result);
}