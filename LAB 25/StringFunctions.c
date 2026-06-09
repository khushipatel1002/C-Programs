#include <stdio.h>
#include<string.h>

void main() {
    char str1[100], str2[100];

    printf("Enter a String :");
    gets(str1);

    printf("\nLength of the String : %d\n", strlen(str1));

    printf("\nEnter Another String :");
    gets(str2);

    if(strcmp(str1,str2) == 0){
        printf("\nBoth strings are equal\n");
    }else{
        printf("\nStrings are Different\n");
    }

    strcpy(str2,str1);
    printf("\nCopied String : %s\n",str2);

    strcat(str1,str2);
    printf("\nConcatenated String : %s\n", str1);

    printf("\nOriginal String str1 : %s", str1);
    strrev(str1);
    printf("\nReversed String str1 : %s\n",str1);

    strlwr(str1);
    printf("\nLowercase str1 : %s\n", str1);

    strupr(str1);
    printf("\nUppercase str1 : %s\n", str1);
}