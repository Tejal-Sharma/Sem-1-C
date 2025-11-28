// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main_merge_arrays(void) {
    int n1, n2; 
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}

// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main_most_frequent_digit(void) {
    int num;
    scanf("%d", &num);
    int count[10] = {0};
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    int max_count = 0;
    int result_digit = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            result_digit = i;
        }
    }
    printf("%d\n", result_digit);
    return 0;
}