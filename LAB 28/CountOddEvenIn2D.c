#include <stdio.h>

void main() {
    int n;
    int ecount = 0, ocount = 0;

    printf("Enter a Number :");
    scanf("%d", &n);

    int ar[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter ar[%d][%d] : ",i,j);
            scanf("%d", &ar[i][j]);

            if(ar[i][j] % 2 == 0){
                ecount++;
            }else{
                ocount++;
            }
        }
    }

    printf("\nArray in Matrix form\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }    

    printf("\nEven Count : %d", ecount);
    printf("\nOdd Count : %d", ocount);

}