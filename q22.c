// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main() {
    int num, originalNum, remainder, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }
    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    return 0;
}

// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        sum += (2 * i + 1) / (float)(2 * i + 2);
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}