//Read and print a matrix.


#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];

    printf("Enter the number of rows:\n ");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


















    


