// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;
    // Read input string
    fgets(str, sizeof(str), stdin);
    // Count vowels and consonants
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Check for vowels
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    // Print the counts
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}       

// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    // Read input string
    fgets(str, sizeof(str), stdin);
    // Convert to uppercase
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            str[i] = ch - ('a' - 'A');
        }
        i++;
    }
    // Print the uppercase string
    printf("%s", str);
    return 0;
}
