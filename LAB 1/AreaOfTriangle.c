#include<stdio.h>

void main(){
    int height,base;

    printf("Enter Height :");
    scanf("%d", &height);
    
    printf("Enter Base :");
    scanf("%d", &base);

    float area = (height*base)/2;

    printf("Area of Triangle : %f", area);

}