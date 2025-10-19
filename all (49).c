/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
           */
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows

    for(i = n; i >= 1; i--) {
        // Print spaces
        for(j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


