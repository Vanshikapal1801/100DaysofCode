//Rotate an array to the right by k positions.

#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int temp[n];
    int i;

    // Adjust k if it is greater than n
    k = k % n;

    // Copy last k elements to the beginning of temp
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the first n-k elements to the rest of temp
    for(i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy temp back to the original array
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[100], n, k, i;

    printf("Enter the number of elements in the array:\n ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: \n");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


















    


