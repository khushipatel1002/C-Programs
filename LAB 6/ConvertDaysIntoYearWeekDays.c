#include<stdio.h>

void main(){
    int total_days, temp;
    int years, weeks, days;

    printf("Enter Total Number of Days :");
    scanf("%d", &total_days);
    
    temp = total_days;

    years = total_days / 365;
    total_days = total_days % 365;

    weeks = total_days / 7;
    days = total_days % 7;

    printf("%d days means %d year, %d week, %d days", temp, years, weeks, days);
}