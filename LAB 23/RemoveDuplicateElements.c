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

    for(int i = 0; i < n; i++){
       for(int j = i+1; j < n; ){
        if(ar[i] == ar[j]){
            for(int k = j; k < n;k++){
                ar[k] = ar[k+1];
            }
            n--; 
        }else{
            j++;
        }
       }
    }

   printf("\nArray After Removing Duplicates\n");
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }

}