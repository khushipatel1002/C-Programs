#include <stdio.h>

void main() {
    char str1[100], str2[100];

    printf("Enter a String :");
    gets(str1);

    
    int i;
    for(i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }
    
    str2[i] = '\0';
    
    printf("\nOriginal String : %s",str1);
    printf("\nCopied String : %s", str2);
}