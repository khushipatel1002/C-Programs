#include<stdio.h>

void main(){
    float bs, hra, da, gs;

    printf("Enter Basic Salary :");
    scanf("%f", &bs);

    if(bs >= 30000){
        hra = bs * 0.30;
        da = bs * 0.95;
    }else if(bs >= 20000){
        hra = bs * 0.25;
        da = bs * 0.90;
    }else if(bs >= 10000){
        hra = bs * 0.30;
        da = bs * 0.95;
    }else{
        hra = 0;
        da = 0;
    }

    gs = bs + hra + da;

    printf("Gross Salary = %.2f", gs);
}