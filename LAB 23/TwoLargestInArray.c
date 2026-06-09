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

    int first,second;

    if(ar[0] > ar[1]){
        first = ar[0];
        second = ar[1];
    }else{
        first = ar[1];
        second = ar[0];
    }

    for(int i = 2; i < n; i++){
        if(ar[i] > first){
            second = first;
            first = ar[i];
        }else if(ar[i] > second && ar[i] != first){
            second = ar[i];
        }
    }


    if(first == second){
        printf("\nAll Elements are same and no Second Largest\n");
    }else{
        printf("\nFirst Largest : %d", first);
        printf("\nSecond Largest : %d", second);
    }
}