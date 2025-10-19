//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    int i, j;
    char temp;
    for(i = start, j = end; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[1000];
    int start = 0, i;

    printf("Enter a sentence:\n ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if(str[len-1] == '\n') { // Remove newline character if present
        str[len-1] = '\0';
        len--;
    }

    for(i = 0; i <= len; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}




















    


