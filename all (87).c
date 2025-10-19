//Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main() {
    int n, i, pos, element;

    // Input size of the array
    printf("Enter number of elements in the sorted array: \n");
    scanf("%d", &n);

    int arr[n + 1];  // +1 to accommodate the new element

    // Input sorted array elements
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    printf("Enter the element to insert: \n");
    scanf("%d", &element);

    // Find the correct position to insert
    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }

    if (i == n) { // If element is greater than all elements
        pos = n;
    }

    // Shift elements to the right to make space
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = element;
    n++;  // Update array size

    // Display the updated array
    printf("Array after insertion: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}






    


