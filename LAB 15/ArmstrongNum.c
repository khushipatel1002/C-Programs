// An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include<stdio.h>
#include<math.h>

void main(){
    int num, temp, rem, sum = 0;
    int digits = 0;

    printf("Enter The Number :");
    scanf("%d", &num);

    temp = num;

    int tempNum = num;
    while (tempNum != 0){
        tempNum = tempNum / 10;
        digits++;
    }

    while (temp != 0){
        rem = temp % 10;
        sum += (int)(pow(rem,digits) + 0.5);
        temp = temp / 10;
    }
    
    if(num == sum){
        printf("%d is Armstrong", num);
    }else{
        printf("%d is Not Armstrong", num);
    }
}