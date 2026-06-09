#include<stdio.h>

void main(){
    int num,temp,digit;

    printf("Enter The Number :");
    scanf("%d", &num);

    int sum = 0;
    temp = num;

    while(num > 0){
        digit = num % 10; // get the last digit
        sum = sum + digit; // Add it to the sum
        num = num / 10; // Remove the last digit
    }

    printf("Sum of digits of %d = %d",temp, sum);
}