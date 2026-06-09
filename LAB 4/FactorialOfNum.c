#include <stdio.h>

void main() {
    int num;

    printf("Enter a Number :");
    scanf("%d", &num);

    int fact = 1;

    // for(int i = 2; i <= num; i++){
    //     fact = fact * i;
    // }

    for(int i = num; i > 1; i --){
        fact = fact * i;
    }

    printf("Factorial of %d = %d",num, fact);
}