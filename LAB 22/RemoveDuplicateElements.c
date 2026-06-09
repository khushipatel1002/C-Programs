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
        for(int j = i+1; j < n;){
            if(ar[i] == ar[j]){
                // Shift elements to the Left
                for(int k = j; k < n; k++){
                    ar[k] = ar[k+1];
                }
                n--;
            }else{
                j++;
            }
        }
    }

    printf("\nArray After Removing Duplicates :\n");
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }
}




// #include <stdio.h>

// void main() {
//     int ar[100], temp[100];

//     int n, isDuplicate, newSize =  0;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &ar[i]);
//     }

//     printf("\nArray\n");
//     for(int i = 0; i < n; i++){
//         printf("%d ", ar[i]);
//     }

//     for(int i = 0; i < n; i++){
//         isDuplicate = 0;
//         for(int j = 0; j < newSize; j++){
//             if(ar[i] == temp[j]){
//                 isDuplicate = 1;
//                 break;
//             }
//         }

//         if(isDuplicate == 1){
//             temp[newSize] = ar[i];
//             newSize++;
//         }
//     }

//     printf("\nArray After Removing Duplicates :\n");
//     for(int i = 0; i < newSize; i++){
//         printf("%d ", temp[i]);
//     }
// }