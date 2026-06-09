#include <stdio.h>

void main() {
    int n, count = 0;

    printf("Enter size of array :");
    scanf("%d", &n);

    int ar[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter ar[%d][%d] : ",i,j);
            scanf("%d", &ar[i][j]);

            if(ar[i][j] == 0){
            count++;
        }
        }
    }

    printf("\nUpper Triangular Matrix\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j){
                printf("0 ");
            }else{
                printf("%d ", ar[i][j]);
            }
        }
        printf("\n");
    }    

}