/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main(void) {
	long n;
	if (scanf("%ld", &n) != 1) return 0;

	int sign = (n < 0) ? -1 : 1;
	long m = n * sign;

	if (m < 10) { /* single digit stays the same */
		printf("%ld\n", n);
		return 0;
	}

	long pow10 = 1;
	while (m / pow10 >= 10) pow10 *= 10;

	long first = m / pow10;
	long last = m % 10;
	long middle = (m % pow10) / 10;

	long swapped = last * pow10 + middle * 10 + first;
	swapped *= sign;

	printf("%ld\n", swapped);
	return 0;
}

 // Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main() {
    int num, sum = 0, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");
    return 0;
}
