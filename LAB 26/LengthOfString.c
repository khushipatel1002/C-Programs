#include <stdio.h>

void main() {
    char str[100];

    printf("Enter a String :");
    gets(str);

    int length = 0;

    while (str[length] != '\0'){
        length++;
    }
    
    printf("Length of String : %d", length);
}