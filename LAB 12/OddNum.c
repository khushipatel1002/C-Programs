#include <stdio.h>

void main() {
    int i = 1, num;

    printf("Enter a Number :");
    scanf("%d", &num);

    while (i <= num){
        if(i % 2 != 0){
            printf("%d ",i);
        }
        i++;
    }
    
}