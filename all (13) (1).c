#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str); // You can use fgets instead for safety

    for(i = 0; str[i] != '\0'; i++) {
        // Check if the character is not a vowel
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after removing vowels: %s\n", result);

    return 0;
}
