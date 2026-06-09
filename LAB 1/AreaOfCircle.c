#include<stdio.h>
#define PI 3.14

void main(){
    int radius;

    printf("Enter Radius : ");
    scanf("%d",&radius);

    int area = PI*radius*radius;

    printf("Area of Circle : %d",area);
}