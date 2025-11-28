// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
void removeVowels(char* str) {
    int i, j = 0;
    int len = strlen(str);
    char result[len + 1]; // +1 for null terminator

    for (i = 0; i < len; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch;
        }
    }
    result[j] = '\0'; // Null terminate the result string
    strcpy(str, result); // Copy the result back to the original string
}   
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    removeVowels(str);
    printf("String after removing vowels: %s\n", str);
    return 0;
}

// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
// Duplicate Q92 block removed (kept the single correct implementation below)
#include <stdio.h>
#include <string.h>
char firstRepeatingLowercase(char* str) {
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                return ch; // Return the first repeating lowercase letter
            }
        }
    }
    return '\0'; // Return null character if no repeating lowercase letter found
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;    
    char result = firstRepeatingLowercase(str);
    if (result != '\0') {
        printf("First repeating lowercase alphabet: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}