// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
int main() {
    char filename[MAX_FILE_NAME];
    FILE *file;
    int vowels = 0, consonants = 0;
    char ch;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read characters from the file and count vowels and consonants
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for easier comparison
        if (ch >= 'a' && ch <= 'z') { // Check if it's an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}   

