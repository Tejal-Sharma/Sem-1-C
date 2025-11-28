// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
#define MAX 100
void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows1, cols1, rows2, cols2;
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX]; 
    // Read dimensions and first matrix
    scanf("%d %d", &rows1, &cols1);
    readMatrix(matrix1, rows1, cols1);
    // Read dimensions and second matrix
    scanf("%d %d", &rows2, &cols2);
    readMatrix(matrix2, rows2, cols2);
    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Error: Matrices dimensions do not match for addition.\n");
        return 1;
    }
    // Add matrices
    addMatrices(matrix1, matrix2, result, rows1, cols1);
    // Print result
    printMatrix(result, rows1, cols1);
    return 0;
}

// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
#define MAX 100
int isSymmetric(int matrix[MAX][MAX], int rows, int cols) {
    if (rows != cols) {
        return 0; // Not symmetric if not square
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}
void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
int main() {
    int rows, cols;
    int matrix[MAX][MAX];
    // Read dimensions and matrix
    scanf("%d %d", &rows, &cols);
    readMatrix(matrix, rows, cols);
    // Check if symmetric
    if (isSymmetric(matrix, rows, cols)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}   