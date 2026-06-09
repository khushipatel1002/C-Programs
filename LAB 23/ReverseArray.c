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

    // printf("\nReversed Array\n");
    // for(int i = n - 1; i >= 0; i--){
    //     printf("%d ", ar[i]);
    // }

    int start = 0;
    int end = n -1;

    while(start < end){
        int temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;

        start++;
        end--;
    }

    printf("\nReversed Array\n");
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }
}