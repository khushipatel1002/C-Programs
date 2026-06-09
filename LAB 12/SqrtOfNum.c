#include<stdio.h>
#include<math.h>

void main(){
    int i = 0;

    printf("Number\tSquare Root\n");
    while (i <= 9){
        printf("%d\t\t%.2f\n", i, sqrt(i));
        i++;
    }
    
}