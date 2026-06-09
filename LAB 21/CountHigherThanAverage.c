#include <stdio.h>

void main() {
    int n;

    printf("Enter the Number :");
    scanf("%d",&n);

    int a[n];
    int sum = 0;

    for(int i = 0; i < n; i++){
        printf("Enter a[%d] :", i);
        scanf("%d",&a[i]);
        sum += a[i];
    }

    float average = (float)sum / n;

    printf("Average : %.2f", average);

    printf("\n\nNumbers Higher Than Average\n");
    for(int i = 0; i < n;i++){
        if(a[i] > average){
            printf("%d ", a[i]);
        }
    }

}