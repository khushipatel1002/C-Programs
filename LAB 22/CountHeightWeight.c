// #include <stdio.h>

// void main() {
//     int n;

//     printf("Enter the Number of Person:");
//     scanf("%d",&n);

//     int a[n][2];

//     for(int i = 0; i < n; i++){
//         printf("Enter Person %d Height :", i+1);
//         scanf("%d",&a[i][0]);

//         printf("Enter Person %d Weight :", i+1);
//         scanf("%d",&a[i][1]);
//     }

//     int count = 0;

//     printf("\nArray\n");
//     for(int i = 0; i < n;i++){
//         if((a[i][0] > 170) && a[i][1] < 50){
//             count++;
//         }
//     }

//     printf("Number of Person : %d", count);
// }


#include <stdio.h>

void main() {
    float height, weight;
    int count = 0;

    for(int i = 1; i <= 5; i++){
        printf("Enter Height(in cm) and Weight(in kg) of person %d : ", i);
        scanf("%f %f", &height, &weight);

        if(height > 170 && weight < 50){
            count++;
        }
    }

    printf("\nNumber of persons with height > 170 cm and weight < 50 kg = %d\n", count);
}