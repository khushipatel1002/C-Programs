#include<stdio.h>

void main(){
    int x, y;

    printf("Enter First Number : ");
    scanf("%d",&x);

    printf("Enter Second Number : ");
    scanf("%d",&y);

    printf("\nBefore Swapping");
    printf("\nX = %d, Y = %d", x,y);

    // without using temporary variable)

    // x = x + y;
    // y = x - y;
    // x = x - y;

    // Uisng temporary variable
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swapping");
    printf("\nX = %d, Y = %d", x,y);
}