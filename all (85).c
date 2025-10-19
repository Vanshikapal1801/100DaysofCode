//Merge two arrays.


#include <stdio.h>

int main() {
    int n1, n2, i, j;

    // Input size of first array
    printf("Enter number of elements in first array:\n ");
    scanf("%d", &n1);
    int arr1[n1];

    // Input elements of first array
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array: \n");
    scanf("%d", &n2);
    int arr2[n2];

    // Input elements of second array
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    int merged[n1 + n2];
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Display merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}


    


