#include <stdio.h>
#include<string.h>

void main() {
    char str[100];

    printf("Enter a String :");
    gets(str);

    char old_char, new_char;

    printf("\nEnter a Character you want to Replace :");
    scanf(" %c", &old_char);

    printf("\nEnter a New Character :");
    scanf(" %c", &new_char);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == old_char){
            str[i] = new_char;
        }
    }

    printf("Replaced String : %s", str);
}