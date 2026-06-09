#include <stdio.h>

int main() {
    int i = 1, result = 1;

    while (i <= 50) {
        printf("%d, ", result);
        result += 3;
        i++;
    }

    return 0;
}
