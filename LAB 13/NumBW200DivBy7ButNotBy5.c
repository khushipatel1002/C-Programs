#include <stdio.h>

int main() {
    int i = 100;
    int even_count = 0, odd_count = 0;

    while (i <= 200) {        
        if ((i % 7 == 0 ) && (i % 5 != 0)){
            printf("%d ", i);
        } 
        i++;
    }   

    return 0;
}
