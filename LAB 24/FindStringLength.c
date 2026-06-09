#include <stdio.h>

void main() {
    char str[100];
    int length = 0;

    printf("Enter a String :");
    gets(str);

    // int i = 0;
    
    while(str[length] != '\0'){
        length++;
        // i++;
    }
    
    printf("Entered String : %s", str);
    printf("\nLength of String : %d", length);
}