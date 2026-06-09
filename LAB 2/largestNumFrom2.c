#include<stdio.h>
#include<stdio.h> // for abs()

void main(){
    int n1, n2;

    printf("Enter First Number : ");
    scanf("%d",&n1);

    printf("Enter Second Number : ");
    scanf("%d",&n2);


    // Using Arithmetic (Mathematical Formula)
    int max = (n1 + n2 + abs(n1 - n2)) / 2;




    //Using Conditional Operator
    // (n1 > n2) ? printf("%d is Largest", n1) : printf("%d is Largest", n2) ;
    // int max = (n1 > n2) ? n1 : n2 ;




    // Using Bitwise Operators
    // int diff = n1 - n2;
    // int k = (diff >> 31) & 1 ; // k = 0 if a >= b, k = 1 if a < b

    // // k = 0 -> max = a
    // // k = 1 -> max = b

    // int max = n1 - k * diff;
    printf("Max = %d\n", max);
}