#include <stdio.h>

void main() {
    int n;

    printf("Enter the Number :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0; i < n; i++){
        printf("Enter a[%d] :", i);
        scanf("%d",&a[i]);
    }

    printf("\nArray\n");
    for(int i = 0; i < n;i++){
        printf("%d ", i);
    }

    printf("\nReverse Array\n");
    for(int i = n - 1; i >= 0;i--){
        printf("%d ", i);
    }
}