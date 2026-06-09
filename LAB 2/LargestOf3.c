#include<stdio.h>
#include<stdio.h> // for abs()

int maximum(int x, int y){
    return (x + y + abs(x - y)) / 2;
}

void main(){
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // printf("Enter First Number : ");
    // scanf("%d",&n1);

    // printf("Enter Second Number : ");
    // scanf("%d",&n2);

    // printf("Enter Third Number : ");
    // scanf("%d",&n3);




    // Using Arithmetic (Mathematical Formula)
    int max_ab = maximum(n1,n2);
    int max_abc = maximum(max_ab,n3);

    printf("Max = %d\n", max_abc);





    //Using Conditional Operator

    // int max = (n1 > n2 && n1 > n3) ? n1 : ((n2 > n3) ? n2 : n3) ;

    // if (n1 > n2)
    //     max = (n1 > n3) ? n1 : n3;
    // else
    //     max = (n2 > n3) ? n2 : n3;
   
    // printf("Max = %d\n", max);

}