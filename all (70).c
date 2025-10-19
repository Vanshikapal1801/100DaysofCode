/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* 
          */

#include <stdio.h>

int main() {
    int n = 5; // Number of rows in the upper half
    int i, j, space;

    // Upper half of the pattern
    for(i = 1; i <= n; i++) {
        for(space = i; space < n; space++) {
            printf(" "); // Print leading spaces (optional for alignment)
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for(i = n - 1; i >= 1; i--) {
        for(space = n; space > i; space--) {
            printf(" "); // Print leading spaces (optional for alignment)
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


           
           




           




