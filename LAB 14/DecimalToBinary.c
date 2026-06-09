#include<stdio.h>

void main(){
    int num, i = 0;
    int binary[32];

    printf("Enter a Number :");
    scanf("%d", &num);

    if(num == 0){
        printf("\nBinary : 0");
        return ;
    }

    while (num > 0){
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("\nBinary :");
    for(int j = i - 1; j >= 0; j--){
        printf("%d",binary[j]);
    }
}