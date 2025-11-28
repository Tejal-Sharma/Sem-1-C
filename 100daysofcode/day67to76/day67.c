// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
#include <stdlib.h>
void mergeSortedArrays(int* nums1, int m, int* nums2, int n, int* merged) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m) {
        merged[k++] = nums1[i++];
    }

    while (j < n) {
        merged[k++] = nums2[j++];
    }
}

int main() {
    int m, n;

    // Input size of first array
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int* nums1 = (int*)malloc(m * sizeof(int));

    // Input elements of first array
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    // Input size of second array
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int* nums2 = (int*)malloc(n * sizeof(int));

    // Input elements of second array
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int* merged = (int*)malloc((m + n) * sizeof(int));

    // Merge the two sorted arrays
    mergeSortedArrays(nums1, m, nums2, n, merged);

    // Print the merged sorted array
    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    // Free allocated memory
    free(nums1);
    free(nums2);
    free(merged);

    return 0;
}
