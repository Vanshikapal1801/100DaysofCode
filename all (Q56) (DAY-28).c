//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // array declaration with max size 100

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
