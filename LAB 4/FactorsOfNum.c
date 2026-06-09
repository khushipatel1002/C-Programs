#include <stdio.h>

void main() {
    int num;

    printf("Enter a Number :");
    scanf("%d", &num);

    printf("\nFactors of %d : \n", num);
    for(int i = 1; i  <= num; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
}