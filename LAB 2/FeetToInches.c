#include<stdio.h>

void main(){
    int feet;

    printf("Enter Feet = ");
    scanf("%d",&feet);

    int inches = feet * 12;

    printf("%d Feet = %d Inches", feet,inches);
}