#include <stdio.h>

void main() {
    int num;

    printf("Enter The Number :");
    scanf("%d", &num);

    printf("Factors of %d\n", num);
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }

}