#include<stdio.h>

void main(){
    int num;
    int flag = 1;

    printf("Enter The Number :");
    scanf("%d", &num);

    for(int i = 2; i < num; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }

    if(num < 2){
        printf("%d is Nor Prime Nor Composite",num);
    }
    else if(flag == 1){
        printf("%d is Prime Number",num);
    }else{
        printf("%d is Not Prime Number",num);
    }
}