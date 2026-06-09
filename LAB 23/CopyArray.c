#include <stdio.h>

void main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int ar[n];
    int br[n];

    for(int i = 0; i < n; i++){
        printf("Enter ar[%d] :", i);
        scanf("%d", &ar[i]);
    }

    printf("\nArray\n");
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }

    for(int i = 0; i < n; i++){
        br[i] = ar[i];
    }

    printf("\nCopied Array\n");
    for(int i = 0; i < n; i++){
        printf("%d ", br[i]);
    }

}