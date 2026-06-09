#include <stdio.h>

void main() {
    int n;

    printf("Enter array Size :");
    scanf("%d",&n);

    int a[n];
    int count = 0;

    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", (i+1));
        scanf("%d", &a[i]);
    }

    printf("\nArray :\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }

    // Check for Duplicates
    for(int i = 0; i < n; i++){
        int duplicateFound = 0;
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                duplicateFound = 1;
                break;
            }
        }

        if(duplicateFound == 1){
            int alreadyCount = 0;
            for(int k = 0; k < i; k++){
                if(a[k] == a[i]){
                    alreadyCount = 1;
                    break;
                }
            }
            if(alreadyCount == 0){
                count++;
            }
        }
    }

    printf("\nTotal Duplicates Elements = %d", count);
    // for(int i = 0; i < n; i++){
    //     printf("%d ",a[i]);
    // }
}