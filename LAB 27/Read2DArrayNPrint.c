#include <stdio.h>

void main() {
    int n;

    printf("Enter a Number :");
    scanf("%d", &n);

    int ar[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter ar[%d][%d] : ",i,j);
            scanf("%d", &ar[i][j]);
        }
    }

    printf("\nArray in Matrix form\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }    
}