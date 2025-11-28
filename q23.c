/* Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += (2.0 * i) / (4.0 * i - 1.0);  // term: 2i / (4i - 1)
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}

// Q46: Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
