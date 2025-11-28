// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
int main() {
    char str[100];
    int count = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Count characters until null terminator
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 to exclude the newline character added by fgets
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    // Print the character count
    printf("%d\n", count);

    return 0;
}   

// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;  
    // Read input string
    fgets(str, sizeof(str), stdin);
    // Print each character on a new line until null terminator
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}   