// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main_insert_in_array(void) {
    int n;
    scanf("%d", &n);
    int arr[n + 1]; // one extra space for the new element  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos, new_elem;
    scanf("%d %d", &pos, &new_elem);
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = new_elem;
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main_delete_from_array(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int del_pos;
    scanf("%d", &del_pos);
    for (int i = del_pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}