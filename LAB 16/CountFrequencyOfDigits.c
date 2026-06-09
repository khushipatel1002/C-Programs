// Frequency of digits means how many times each digit (from 0 to 9) appears in a given number.

#include <stdio.h>

void main() {
    long long num;
    int digit;
    int freq[10] = {0};

    printf("Enter the Number :");
    scanf("%lld",&num);

    if(num < 0){
        num = -num;
    }

    if(num == 0){
        freq[0] = 1;
    }else{
        while(num > 0){
            digit = num % 10;
            freq[digit]++;
            num /= 10;
        }
    }

    for(int i = 0; i < 10; i++){
        if(freq[i] > 0){
            printf("Digit %d : %d Times\n", i, freq[i]);
        }
    }
}