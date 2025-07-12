#include <stdio.h>

int main() {
    int rows, cols, nonZero;
    
    // Read dimensions and number of non-zero elements
    scanf("%d %d %d", &rows, &cols, &nonZero);

    // Initialize the original matrix with all zeros
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0;
        }
    }

    // Read the non-zero elements and fill the matrix
    for (int i = 0; i < nonZero; i++) {
        int r, c, val;
        scanf("%d %d %d", &r, &c, &val);
        matrix[r][c] = val; // Place the value at the correct position
    }

    // Print the original matrix with a space after each element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
