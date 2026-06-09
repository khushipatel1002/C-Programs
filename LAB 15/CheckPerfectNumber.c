// A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.
// For example: 6 is perfect because 
// 1+2+3=6
// 1+ 2 + 4 + 7 + 14 = 28 is perfect

#include <stdio.h>

void main() {
    int num, i = 1, sum = 0;

    printf("Enter a Number :");
    scanf("%d", &num);

    while (i < num){
        if(num % i == 0){
            sum += i;
        }
        i++;
    }
    
    if(num == sum){
        printf("%d is a Perfect Number", num);
    }else{
        printf("%d is a Not Perfect Number", num);
    }
}