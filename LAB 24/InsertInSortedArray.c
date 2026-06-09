#include <stdio.h>

void main() {
    int n;

    printf("Enter array Size :");
    scanf("%d",&n);

    int ar[n];

    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%d", &ar[i]);
    }

    int value;
    printf("Enter the Value you want to Insert :");
    scanf("%d", &value);

    // Find Position to insert the value
    int pos;
    for(pos = 0; pos < n; pos++){
        if(ar[pos] > value){
            break;
        }
    }

    // Shift the Elements to the right
    for(int i = n; i > pos; i--){
        ar[i] = ar[i - 1];
    }

    ar[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
}