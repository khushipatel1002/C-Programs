#include <stdio.h>

void main() {
    char str1[100], str2[100];

    printf("Enter First String :");
    gets(str1);

    printf("Enter Second String :");
    gets(str2);
    
    int i = 0, j = 0;
    
    while (str1[i] != '\0'){
        if(str1[i] == '\n'){
            str1[i] = '\0';
            break;
        }
        i++;
    }
    
    while(str2[j] != '\0'){
        if(str2[j] == '\n'){
            break;
        }
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("\nMerged String : %s", str1);
}