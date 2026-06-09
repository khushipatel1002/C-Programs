#include <stdio.h>

void main() {
    int n1, n2, i;

    printf("Enter First Number :");
    scanf("%d", &n1);

    printf("Enter Second Number :");
    scanf("%d", &n2);

    i = n1;

    while (i <= n2){
        if(i % 2 == 0){
            printf("%d ",i);
        }
        i++;
    }
    
}