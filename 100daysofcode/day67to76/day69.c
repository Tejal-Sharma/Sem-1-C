// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>
#include <stdlib.h> // For malloc and free

// Assuming the maximum value in the array is within a reasonable range for a frequency array.
// If not, a hash set implementation would be more suitable.
#define MAX_VAL 10000 // Adjust based on expected maximum value in the input array

int findRepeatedElement(int nums[], int size) {
    // Using a frequency array (or boolean array for presence) to track seen elements.
    // Initialize all counts to 0.
    int* seen = (int*)calloc(MAX_VAL + 1, sizeof(int));
    if (seen == NULL) {
        printf("Memory allocation failed.\n");
        exit(1); // Exit if memory allocation fails
    }

    for (int i = 0; i < size; i++) {
        if (seen[nums[i]] > 0) {
            int repeatedElement = nums[i];
            free(seen); // Free allocated memory
            return repeatedElement;
        } else {
            seen[nums[i]] = 1;
        }
    }

    free(seen); // Free allocated memory in case no repeated element is found (though problem states one will be repeated)
    return -1; // Should not be reached based on problem statement
}
int main() {
    int nums1[] = {1, 3, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Repeated element in nums1: %d\n", findRepeatedElement(nums1, size1));

    int nums2[] = {1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Repeated element in nums2: %d\n", findRepeatedElement(nums2, size2));

    int nums3[] = {0, 4, 1, 1, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Repeated element in nums3: %d\n", findRepeatedElement(nums3, size3));

    return 0;
}   
