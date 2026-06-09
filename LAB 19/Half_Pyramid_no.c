// #include <stdio.h>

// void main() {
//     int n;

//     printf("Enter the Number :");
//     scanf("%d",&n);

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//            if((i+j) % 2 == 0){
//                 printf("1");
//            }else{
//                 printf("0");
//            }
//         }
//         printf("\n");
//     }
// }


#include <stdio.h>

int main() {
    int rows = 5;
    
    for (int i = 1; i <= rows; i++) {
        int start;

        // If row is even, start with 0, else with 1
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 1; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start; // Toggle between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
