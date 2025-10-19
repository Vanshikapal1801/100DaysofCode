//Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, search, found = 0;
    
    // Input size of array
    printf("Enter number of elements in the array: \n");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Element to search
    printf("Enter the element to search:\n ");
    scanf("%d", &search);
    
    // Linear search logic
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at position %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }
    
    if (!found)
        printf("Element %d not found in the array.\n", search);
    
    return 0;
}

    


