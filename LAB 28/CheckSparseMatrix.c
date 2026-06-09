#include <stdio.h>

void main() {
    int rows,cols, count = 0;

    printf("Enter a Number of Rows and Columns:");
    scanf("%d %d", &rows, &cols);

    int ar[rows][cols];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Enter ar[%d][%d] : ",i,j);
            scanf("%d", &ar[i][j]);

            if(ar[i][j] == 0){
                count++;
            }
        }
    }

    printf("\nArray in Matrix form\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }    

    if(count > (rows*cols)/2){
        printf("\nThe matrix is a Sparse Matrix");
    }else{
        printf("\nThe matrix is Not a Sparse Matrix");
    }
}