// #include <stdio.h>

// void printFibonacci(int num){
//     int a = 0, b = 1, next;

//     printf("Fibonacci series up to %d :\n", num);

//     while (a <= num){
//         printf("%d ", a);
//         next = a + b;
//         a = b;
//         b = next;
//     }
    
// }

// void main() {
//     int num;

//     printf("Enter the Number :");
//     scanf("%d", &num);

//     printFibonacci(num);
// }



#include <stdio.h>

void printFibonacci(int num){
    int a = 0, b = 1, c;

    printf("Fibonacci series up to %d Steps:\n", num);

    printf("%d ", a);
    printf("%d ", b );

    for(int i = 2; i < num; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
}

void main() {
    int num;

    printf("Enter the Number :");
    scanf("%d", &num);

    printFibonacci(num);
}





