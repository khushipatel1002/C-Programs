#include <stdio.h>

void main() {
    int n;
    int pcount = 0, ncount = 0, zero = 0;

    printf("Enter a Number :");
    scanf("%d", &n);

    int ar[n][2];

    for(int i = 0; i < n; i++){
        printf("Enter Student %d Roll No : ",(i+1));
        scanf("%d", &ar[i][0]);

        printf("Enter Student %d Marks : ",(i+1));
        scanf("%d", &ar[i][1]);
    }

    printf("\n\nRoll No\tMarks\n");
    printf("-----------------S");
    for(int i = 0; i < n; i++){
        printf("\n%d\t%d", ar[i][0], ar[i][1]);
    }    

}