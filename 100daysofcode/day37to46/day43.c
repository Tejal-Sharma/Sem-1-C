// Q84: Reverse a string.
/*
Sample Test Cases:
Input 1:
Hello
Output 1:
olleH
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    // Read input string
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    // Reverse the string
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}

// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int isPalindrome = 1;
    // Read input string
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    // Check for palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    // Print result
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}