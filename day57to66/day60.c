// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
#include <limits.h> // For INT_MIN

void findMaxInSlidingWindow(int arr[], int n, int k) {
    if (n == 0 || k == 0) {
        return; // Handle empty array or zero window size
    }

    // Iterate through the array to consider each possible starting position of a window
    for (int i = 0; i <= n - k; i++) {
        int currentMax = INT_MIN; // Initialize currentMax for the current window

        // Iterate within the current window to find the maximum element
        for (int j = 0; j < k; j++) {
            if (arr[i + j] > currentMax) {
                currentMax = arr[i + j];
            }
        }
        printf("%d ", currentMax); // Print the maximum for the current window
    }
    printf("\n"); // Print a newline at the end
}

int main() {
    // Sample Test Case 1
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    printf("Input 1: arr = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3\n");
    printf("Output 1: ");
    findMaxInSlidingWindow(arr1, n1, k1);

    // Sample Test Case 2
    int arr2[] = {5, 1, 3, 4, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 1;
    printf("Input 2: arr = [5, 1, 3, 4, 2], k = 1\n");
    printf("Output 2: ");
    findMaxInSlidingWindow(arr2, n2, k2);

    return 0;
}