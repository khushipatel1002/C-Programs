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

    // Assuming the Array is Sorted
    int expected = ar[0];

    printf("\nMissing Numbers are :\n");

    for(int i = 0; i < n; i++){
        while (expected < ar[i]){
            printf("%d ", expected);
            expected++;
        }    
        expected++;
    }

}