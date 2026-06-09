#include <stdio.h>

void main() {
    int num,  sum = 0, count = 0;
    char choice;

    do{
        printf("Enter a Number :");
        scanf("%d", &num);

        sum += num;
        count++;

        printf("Want to Enter Another Number ? (y/n) :");
        scanf(" %c", &choice);
    }while (choice == 'y' || choice == 'Y');
    
    float avg = (float)sum / count;
    
    printf("\nTotal Numbers Entered : %d", count);
    printf("\nSum : %d", sum);
    printf("\nAverage : %f", avg);
}