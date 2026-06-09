#include <stdio.h>

void main(){
    int n1, n2;

    printf("Enter First Number :");
    scanf("%d", &n1);

    printf("Enter Second Number :");
    scanf("%d", &n2);

    int result = n1 + n2;

    printf("Addition of %d and %d = %d", n1, n2, result);
}