#include<stdio.h>

void main(){
    int a[5];
    int sum = 0;

    for(int i = 0; i < 5; i++){
        printf("\nEnter Subject %d marks : ", i+1);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }

    float percentage = sum / 5;

    if(percentage > 70){
        printf("Distinction");
    }else if(percentage >= 61){
        printf("First Class");
    }else if(percentage >= 46){
        printf("Second Class");    
    }else if(percentage >= 36){
        printf("Pass Class");
    }else{
        printf("Fail");
    }
}