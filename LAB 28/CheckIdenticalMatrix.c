#include <stdio.h>

void main() {
    int n, isIdentical = 1;

    printf("Enter a Number :");
    scanf("%d", &n);

    int a[n][n], b[n][n];

    printf("Enter value for First Matrix : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter value for Second Matrix : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter ab[%d][%d] : ",i,j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nFirst Array\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }    

    printf("\nSecond Array\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] !=b[i][j]){
                isIdentical = 0;
                break;
            }
        }
    }   

    if(isIdentical){
        printf("\nBoth Matrices are Identical");
    }else{
        printf("\nMatrices are Not Identical");
    }
    
}