// #include<stdio.h>

// void sort(int arr[], int n){
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i+1; j < n; j++){
//             if( arr[i] > arr[j]){
//                 int temp = arr[j];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// void main(){
//     int arr[3];

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

//     sort(arr,3);

//     printf("Ascending Order : %d %d %d\n", arr[0], arr[1], arr[2]);
//     printf("Descending Order : %d %d %d\n", arr[2], arr[1], arr[0]);
// }




#include<stdio.h>

void main(){
    int a, b, c;

    printf("Enter three Numbers :");
    scanf("%d %d %d", &a, &b, &c);

    int min, mid, max;

    // Ascending Order Logic
    if(a <= b && a <= c){
        min = a;

        if(b <= c){
            mid = b;
            max = c;
        }else{
            mid = c;
            max = b;
        }
    }else if(b <= a && b <= c){
        min = b;
        if(a <= c){
            mid = a;
            max = c;
        }else{
            mid = c;
            max = a;
        }
    }else{
        min = c;
        if(a <= b){
            mid = a;
            max = b;
        }else{
            mid = b;
            max = a;
        }
    }


    printf("Ascending Order : %d %d %d\n", min, mid, max);
    printf("Descending Order : %d %d %d\n", max, mid, min);
}