#include <stdio.h>

void main() {
    int num, a, b , next;

    printf("Enter The Number :");
    scanf("%d", &num);

    a = 0;
    b = 1;

    // printf("%d ", a);
    // printf("%d ", b);

    // for(int i = 2; i < num; i++){
    //     next = a + b;
    //     printf("%d ", next);
    //     a = b;
    //     b = next;
    // }


    while (a <= num){
        printf("%d ", a);
        next = a+b;
        a = b;
        b = next;
    }
    
}