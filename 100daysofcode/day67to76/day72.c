// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH 256
int main() {
    FILE *file;
    char line[MAX_LINE_LENGTH];

    // Open the file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}