//Print the initials of a name wth a surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int len, i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);  

    len = strlen(name);

    
    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted Name: ");

    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
    }

    if (lastSpace != -1)
        printf(" %s", &name[lastSpace + 1]);
    else
        printf("%s", name);

    printf("\n");
    return 0;
}

