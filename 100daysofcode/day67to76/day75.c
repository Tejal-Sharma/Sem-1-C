// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char buffer[256];

    // Open the file in append mode
    file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Prompt user for input
    printf("Enter text to append: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Append the text to the file
        fputs(buffer, file);
        printf("File updated successfully with appended text.\n");
    } else {
        printf("Error reading input.\n");
    }

    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}