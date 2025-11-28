// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

void findFirstNegative(int arr[], int n, int k) {
    int i, j;
    for (i = 0; i <= n - k; i++) {
        int foundNegative = 0;
        for (j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                foundNegative = 1;
                break; // Found the first negative, move to the next window
            }
        }
        if (!foundNegative) {
            printf("0 "); // No negative found in the current window
        }
    }
    printf("\n"); // Newline after all results
}

int main() {
    // Sample Test Case 1
    int arr1[] = {-8, 2, 3, -6, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Output 1:\n");
    findFirstNegative(arr1, n1, k1);

    // Sample Test Case 2
    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("Output 2:\n");
    findFirstNegative(arr2, n2, k2);

    // Sample Test Case 3
    int arr3[] = {12, 1, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 3;
    printf("Output 3:\n");
    findFirstNegative(arr3, n3, k3);

    return 0;
}