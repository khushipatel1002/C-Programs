#include <stdio.h>
#include<string.h>

void main() {
    char str[100];

    printf("Enter a String :");
    gets(str);

    int i = 0;

    printf("\nCharacters of a Given String :\n");
    while (str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;   
    }
    
}