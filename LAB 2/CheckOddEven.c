#include<stdio.h>

void main(){
    int num;

    printf("Enter a Number :");
    scanf("%d",&num);

    // if(num%2 == 0){
    //     printf("%d is Even", num);
    // }else{
    //     printf("%d is Odd", num);
    // }

   
   
   
    // (num % 2 == 0) ? printf("%d is Even", num) : printf("%d is Odd", num);




    // Using Bitwise AND and Pointer Offset

    // char *msg = "Even\0Odd"; // first 5 char for "Even", then null, then "Odd"

    // num & 1 = 0 -> even,
    // num & 1 = 1 -> odd

    // printf("%s\n", msg + (num & 1) * 5);




    // Using Array of Strings

    // const char *msg[] = { "Even", "Odd" };
    
    // printf("%s\n", msg[num & 1]);




    // Using Modular Arithmetic and Math Logic

    char *msgs = "Even\0Odd";
    printf("%s\n", msgs + (num % 2) * 5);
}