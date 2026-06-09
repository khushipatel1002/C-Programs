#include<stdio.h>

void main(){
    int num;

    printf("Enter Number : ");
    scanf("%d",&num);

    // if(num < 0){
    //     printf("%d is Negative", num);
    // }else if(num == 0){
    //     printf("%d is Zero", num);
    // }else{
    //     printf("%d is Positive", num);
    // }



    // Trick: Boolean expression evaluates to 1 (true) or 0 (false)
    printf("Positive\n" + (num < 0) * 9);  // If num < 0, shift pointer 9 chars to print "Negative"
    printf("Negative\n" + (num >= 0) * 9); // If num >= 0, shift pointer 9 chars to print "Positive"



    // In a 32-bit signed integer, the sign bit (bit 31) is:
    // 0 for positive
    // 1 for negative

     // Extract the sign bit using right shift and bitwise AND
    //  int sign = (num >> 31) & 1;

     // Use pointer offset trick to print message
     // sign = 0 → Positive
     // sign = 1 → Negative

    //  char *msg = "Positive\0Negative";
    //  printf("%s\n", msg + sign * 9);
}