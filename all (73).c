//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a number:\n ");
    scanf("%d", &num);

    original = num; // store the original number

    // reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // check palindrome
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
