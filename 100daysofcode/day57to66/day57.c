// Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int n, i, j, prev_greater;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find previous greater elements
    printf("Previous greater elements:\n");
    for (i = 0; i < n; i++) {
        prev_greater = -1; // Default value if no greater element is found
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break;
            }
        }
        printf("%d", prev_greater);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}   

