#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using conditional operator
    (num > 0) ? printf("The number is Positive.\n") :
    (num < 0) ? printf("The number is Negative.\n") :
                printf("The number is Zero.\n");

    return 0;
}
