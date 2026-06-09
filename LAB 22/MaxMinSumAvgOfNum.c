#include <stdio.h>

void main() {
    int n;

    printf("Enter the Number :");
    scanf("%d",&n);

    int a[n];
    float sum = 0.0;

    for(int i = 0; i < n; i++){
        printf("Enter a[%d] :", i);
        scanf("%d",&a[i]);
        sum += a[i];
    }

    float average = sum / n;
    
    printf("\nSum = %.2f", sum);
    printf("\nAverage : %.2f", average);

    int max = a[0];
    int min = a[0];

    for(int i = 0; i < n;i++){
        if(max > a[i]){
            max = a[i];
        }
        if(min < a[i]){
            min = a[i];
        }
    }

    printf("\nMinimum : %d", min);
    printf("\nMaximum : %d", max);
}