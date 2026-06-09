#include <stdio.h>

int main() {
    int i = 1, num;
    int even_count = 0, odd_count = 0;

    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        i++;
    }

    printf("Count of even numbers: %d\n", even_count);
    printf("Count of odd numbers: %d\n", odd_count);

    return 0;
}
