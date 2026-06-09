#include <stdio.h>

void main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // First, check for a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if(a == b && b == c){
            printf("The Triangle is Equilateral");
        }else if(a == b || b == c || a == c){
            printf("The Triangle is Isosceles");
        }else{
            printf("The Triangle is Scalene");
        }
    }else{
        printf("The given Sides do not form a valid Triangle");
    }
}