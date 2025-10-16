//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; 

    printf("Enter a number:\n ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int index = 0;
    int n = num;

    
    while (n > 0) {
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    printf("Binary representation of %d is: ", num);

    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");
    return 0;
}




