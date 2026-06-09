#include <stdio.h>

void main() {
    char str[100];

    printf("Enter a String :");
    gets(str);

    printf("\nUppercase : ");
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            printf("%c",str[i] - 32); // Convert Lowercase to Uppercase
        }else{
            printf("%c",str[i]);
        }
    }


    printf("\nLowercase : ");
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c",str[i] + 32); // Convert Uppercase to Lowercase
        }else{
            printf("%c",str[i]);
        }
    }

}