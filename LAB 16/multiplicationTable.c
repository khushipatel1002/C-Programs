#include <stdio.h>

void main() {
    int num;

    printf("Enter The Number :");
    scanf("%d", &num);

    printf("\nTable of %d\n");
    for(int i = 1; i <= 10; i++){
        printf("\n%d * %d = %d", num, i, (num*i));
    }

}