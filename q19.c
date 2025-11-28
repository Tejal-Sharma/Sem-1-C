// Q37: Write a program to find the LCM of two numbers.

/*
sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() {
    int num1, num2, lcm, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        ++max;
    }
    printf("LCM of %d and %d is %d\n", num1,
              num2, lcm);
    return 0;
}

// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() {
    int num, sum = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
