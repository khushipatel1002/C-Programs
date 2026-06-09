#include<stdio.h>

void main(){
    int p,r,n;

    printf("Enter Principle Amount : ");
    scanf("%d",&p);

    printf("Enter Rate of Interest : ");
    scanf("%d",&r);

    printf("Enter Number of Years : ");
    scanf("%d",&n);

    float si = (p*r*n)/100.f;

    printf("Simple Interest = %f", si);
}