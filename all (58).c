//Write a program to check if a number is a strong number.

#include <stdio.h>

// Function to find factorial of a number
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, rem, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Store original number

    // Find sum of factorials of digits
    while(temp > 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    // Check if Strong Number
    if(sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}




           
           




           




