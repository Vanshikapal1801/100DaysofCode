//Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100]; // array declaration (max size 100)

    printf("Enter the number of elements:\n ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add each element to sum
    }

    printf("The sum of array elements = %d\n", sum);

    return 0;
}
