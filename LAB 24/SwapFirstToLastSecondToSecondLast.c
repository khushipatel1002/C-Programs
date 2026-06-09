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

    for(int i = 0; i < n/2; i++){
        int temp = ar[i];
        ar[i] = ar[n-1-i];
        ar[n-1-i] = temp;
    }
    
    printf("\nSwapped Array\n");
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }
}