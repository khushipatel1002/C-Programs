// totalSecones = 10000 Secondes

// hours = 10000/3600 = 2
// totalSecondes = 10000 % 3600 = 2800

// minutes = 2800 / 60 = 46
// seconds = 2800 % 60 = 40

#include<stdio.h>

void main(){
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter Total Seconds : ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("Time ~> %02d : %02d : %02d\n", hours, minutes, seconds);
}