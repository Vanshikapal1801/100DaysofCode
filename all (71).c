/* Write a program to print the following pattern.
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

/**
 * @brief Prints a centered diamond pattern of stars.
 * The pattern has a maximum width of 9 stars (5 rows up, 4 rows down).
 */
 
void print_diamond_pattern() {
    // n defines the height of the top half (including the center row)
    // For a max width of 9 stars, n = 5 (since 2*5 - 1 = 9)
    int n = 5;
    int i, j;

    // --- Part 1: Increasing rows (Top Half: 1, 3, 5, 7, 9 stars) ---
    for (i = 1; i <= n; i++) {
        // 1. Print leading spaces for centering: n - i
        for (j = 0; j < (n - i); j++) {
            printf(" ");
        }

        // 2. Print stars: 2*i - 1
        for (j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        
        // 3. Move to the next line
        printf("\n");
    }

    // --- Part 2: Decreasing rows (Bottom Half: 7, 5, 3, 1 stars) ---
    // Start from i = n - 1 (4) and go down to 1, to skip the center row (i=5).
    for (i = n - 1; i >= 1; i--) {
        // 1. Print leading spaces for centering: n - i
        for (j = 0; j < (n - i); j++) {
            printf(" ");
        }

        // 2. Print stars: 2*i - 1
        for (j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        
        // 3. Move to the next line
        printf("\n");
    }
}

int main() {
    print_diamond_pattern();
    return 0;
}




           




