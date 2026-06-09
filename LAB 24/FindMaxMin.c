#include <stdio.h>

void main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int ar[n];

    for(int i = 0; i < n; i++){
        printf("Enter ar[%d] :", i);
        scanf("%d", &ar[i]);
    }

    printf("\nArray\n");
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }

    int max = ar[0];
    int min = ar[0];

    for(int i = 2; i < n; i++){
        if(ar[i] > max){
            max = ar[i];
        }
        if(ar[i] < min){
            min = ar[i];
        }
    }

    printf("\nmaximum = %d", max);
    printf("\nminimum = %d", min);

}