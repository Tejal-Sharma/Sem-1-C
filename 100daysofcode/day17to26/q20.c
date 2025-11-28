 // Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int num, product = 1, remainder, hasOdd = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }
    if (!hasOdd) {
        product = 1; // Assume product is 1 if no odd digits
    }
    printf("Product of odd digits: %d\n", product);
    return 0;
}

// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main() {
    int num, remainder, complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &num); 
    while (num != 0) {
        remainder = num % 10;
        if (remainder == 0) {
            complement += 1 * place;
        }
        num /= 10;
        place *= 10;
    }
    printf("1's complement: %d\n", complement);
    return 0;
}