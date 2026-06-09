#include <stdio.h>

void main() {
    int n;

    printf("Enter the Number :");
    scanf("%d",&n);

    int a[n];

    for(int i = 0; i < n; i++){
        printf("Enter a[%d] :", i);
        scanf("%d",&a[i]);
    }

    int ecount = 0;
    int ocount = 0;

    printf("\nArray\n");
    for(int i = 0; i < n;i++){
        if(a[i]%2 == 0){
            ecount++;
        }else{
            ocount++;
        }
    }

    printf("Even Count : %d", ecount);
    printf("Odd Count : %d", ocount);
}