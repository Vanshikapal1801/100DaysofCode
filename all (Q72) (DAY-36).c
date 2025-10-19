//Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];
    int sum = 0;

    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    printf("Enter the number of columns: \n");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add element to sum
        }
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}



















    


