#include <stdio.h>
#include<string.h>

void main() {
    char str[100];

    printf("Enter a String :");
    gets(str);

    int i = 0;
    char ch;
    int found = 0;

    printf("\nEnter a Character You want to find :");
    scanf(" %c",&ch);

    while (str[i] != '\0'){
        if(str[i] == ch){
            printf("%c Found at Position %d", ch, (i+1));
            found = 1;
            break;
        }
        i++;
    }

    if(!found){
        printf("%c not Found", ch);
    }
    
}