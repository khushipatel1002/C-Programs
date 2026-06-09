#include<stdio.h>

void main(){
    int num, temp, rem, revNum;

    printf("Enter The Number :");
    scanf("%d", &num);

    temp = num;
    revNum = 0;

    while (num > 0){
        rem = num % 10;
        revNum = revNum*10 + rem;
        num = num / 10;
    }
    
    if(temp == revNum){
        printf("%d is Palindrome", revNum);
    }else{
        printf("%d is Not Palindrome", revNum);
    }
}