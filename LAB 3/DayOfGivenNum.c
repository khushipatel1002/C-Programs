#include<stdio.h>

void main(){
    int num;

    printf("Enter Number between 1 to 7 :");
    scanf("%d", &num);

    switch (num){
        case 1 : printf("It's a MONDAY"); 
            break;

        case 2 : printf("It's a Tuesday"); 
            break;
        
        case 3 : printf("It's a Wednesday"); 
            break;
    
        case 4 : printf("It's a Thursday"); 
            break;

        case 5 : printf("It's a Friday"); 
            break;

        case 6 : printf("It's a Saturday"); 
            break;

        case 7 : printf("It's a Sunday"); 
            break;

        default: printf("Invalid Choice"); 
            break;
    }
}