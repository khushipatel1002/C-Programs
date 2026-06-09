#include <stdio.h>

void main() {
    int n;

    printf("Enter array Size :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", (i+1));
        scanf("%d", &a[i]);
    }

    printf("\nArray :\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted Array :\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}