#include<stdio.h>

void main(){
    int f;

    printf("Enter Fahrenheit Value = ");
    scanf("%d",&f);

    float celsius = ((f - 32)*5)/9.f;

    printf("%d Fahrenheit = %f Celsius", f,celsius);
}