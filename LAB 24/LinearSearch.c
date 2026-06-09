#include <stdio.h>

void main(){
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

    int search;
    int found = 0;

    printf("\nEnter the Element you want to Search :");
    scanf("%d", &search);

    for(int i = 0; i < n; i++){
        if(ar[i] == search){
            printf("\nElement %d Found at Position %d", search, i+1);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("\nElement not Found");
    }
}