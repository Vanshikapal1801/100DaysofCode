//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; // Array to store count of each digit (0-9)
    int digit, max = 0, mostFrequent = 0;

    // Input number
    printf("Enter an integer number: \n");
    scanf("%ld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count occurrence of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum occurrence
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFrequent = i;
        }
    }

    printf("The digit that occurs most frequently is %d (appeared %d times).\n", mostFrequent, max);

    return 0;
}




    


