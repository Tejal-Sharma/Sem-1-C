// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>
#define MAX 100 
bool areDiagonalElementsDistinct(int matrix[MAX][MAX], int rows, int cols) {
    bool seen[MAX * MAX] = { false }; // Assuming matrix elements are non-negative and within a reasonable range

    for (int i = 0; i < rows && i < cols; i++) {
        int element = matrix[i][i];
        if (seen[element]) {
            return false; // Duplicate found
        }
        seen[element] = true;
    }
    return true; // All diagonal elements are distinct
}
int main() {
    int matrix[MAX][MAX];
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (areDiagonalElementsDistinct(matrix, rows, cols)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}

// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
#define MAX 100
int sumOfMainDiagonal(int matrix[MAX][MAX], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}
int main() {
    int matrix[MAX][MAX];
    int size;
    printf("Enter size of square matrix: ");
    scanf("%d", &size);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = sumOfMainDiagonal(matrix, size);
    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}