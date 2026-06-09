// #include<stdio.h>

// void main(){
//     char ch;

//     printf("Enter a Character :");
//     scanf(" %c", &ch);

//     if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//         printf("%c is a Vowel", ch);
//     }else{
//         printf("%c is a Consonant", ch);
//     }
// }





#include <stdio.h>
#include <string.h>  // for strchr()

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if character is a vowel using strchr (searches in string)
    if (strchr("aeiouAEIOU", ch))
        printf("'%c' is a vowel.\n", ch);
    else
        printf("'%c' is a consonant.\n", ch);

    return 0;
}





// #include <stdio.h>

// int main() {
//     char ch;
//     char *vowels = "aeiouAEIOU";
//     int isVowel = 0;

//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     // Check if character is a vowel using loop (no if/else)
//     for (int i = 0; vowels[i]; i++)
//         isVowel += (vowels[i] == ch);  // will be 1 if match, 0 otherwise

//     // Use ternary operator to print (still no if/else/switch)
//     printf("'%c' is a %s.\n", ch, (char*[]){"consonant", "vowel"}[isVowel]);

//     return 0;
// }
