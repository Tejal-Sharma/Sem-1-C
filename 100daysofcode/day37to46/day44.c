// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    int i = 0;
    // Read input string
    fgets(str, sizeof(str), stdin);
    // Count spaces, digits, and special characters
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) {
            special++;
        }
        i++;
    }
    // Print the counts
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}       

// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    // Read input string
    fgets(str, sizeof(str), stdin);
    // Replace spaces with hyphens
    while (str[i] != '\0' && str[i] != '\n') {  
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
    // Print the modified string
    printf("%s", str);
    return 0;
}   