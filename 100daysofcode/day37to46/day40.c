// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
void diagonalTraversal(int matrix[][100], int rows, int cols) {
    for (int d = 0; d < rows + cols - 1; d++) {
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;

        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
    }
    printf("\n");
}
int main() {
    int rows, cols;
    int matrix[100][100];

    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Perform diagonal traversal
    diagonalTraversal(matrix, rows, cols);

    return 0;
}

// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main() {
    int r1, c1, r2, c2;
    int mat1[100][100], mat2[100][100], result[100][100];   
    // Input dimensions of first matrix
    scanf("%d %d", &r1, &c1);
    // Input elements of first matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    // Input dimensions of second matrix
    scanf("%d %d", &r2, &c2);
    // Input elements of second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, r1, c1, r2, c2);
    // Print result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}   