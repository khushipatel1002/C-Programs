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

    int pcount = 0;
    int ncount = 0;

    printf("\nArray\n");
    for(int i = 0; i < n;i++){
        if(a[i] < 0){
            ncount++;
        }else{
            pcount++;
        }
    }

    printf("Positive Count : %d", pcount);
    printf("Negative Count : %d", ncount);
}