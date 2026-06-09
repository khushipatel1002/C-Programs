#include <stdio.h>

void main() {
    int num, i = 2;

    printf("Enter a Number :");
    scanf("%d",&num);

    int flag = 1;

    while (i < num){
        if(num % i == 0){
            flag = 0;
            break;
        }
        i++;
    }
    
    if(flag == 1){
        printf("\n%d is Prime Number", num);
    }else{
        printf("\n%d is Not Prime Number", num);
    }
}