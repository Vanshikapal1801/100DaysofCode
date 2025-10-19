//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, element;

    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the new element (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter the element to insert:\n ");
    scanf("%d", &element);

    // Shift elements to the right
    for(i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[pos - 1] = element;
    n++; // Increase array size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}








    


