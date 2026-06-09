#include <stdio.h>

void main() {
    int n;
    int pcount = 0, ncount = 0, zero = 0;

    printf("Enter a Number :");
    scanf("%d", &n);

    int ar[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter ar[%d][%d] : ",i,j);
            scanf("%d", &ar[i][j]);

            if(ar[i][j] > 0){
                pcount++;
            }else if(ar[i][j] < 0){
                ncount++;
            }else{
                zero++;
            }
        }
    }

    // printf("\nArray in Matrix form\n");
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         printf("%d ", ar[i][j]);
    //     }
    // }    

    printf("\nPostive Count : %d", pcount);
    printf("\nNegative Count : %d", ncount);
    printf("\nTotal Zeros : %d", zero);
}