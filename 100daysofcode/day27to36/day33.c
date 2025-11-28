// Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main_binary_search_array(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);       
    int left = 0;
    int right = n - 1;
    int index = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            index = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("%d\n", index);
    return 0;
}

// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main_insert_in_sorted_array(void) {
    int n;
    scanf("%d", &n);
    int arr[n + 1]; // one extra space for the new element
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int new_elem;
    scanf("%d", &new_elem);
    int i;
    for (i = n - 1; (i >= 0 && arr[i]
    > new_elem); i--) {
            arr[i + 1] = arr[i];
        }   
    arr[i + 1] = new_elem;
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    return 0;
}   