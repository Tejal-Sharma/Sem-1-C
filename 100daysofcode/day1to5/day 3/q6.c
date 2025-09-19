//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/  
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a third variable
    temp = a; // Step 1: Store the value of 'a' in '
    a = b;    // Step 2: Assign the value of 'b' to 'a'
    b = temp; // Step 3: Assign the value stored in 'temp' to
                // 'b', which is the original value of 'a'
    printf("After swap: %d %d\n", a, b);
    return 0;
}


