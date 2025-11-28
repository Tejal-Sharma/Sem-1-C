// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    char sourceFileName[100], destFileName[100];
    FILE *sourceFile, *destFile;
    int ch;

    // Taking filenames as input from the user
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter destination file name: ");
    scanf("%s", destFileName);

    // Opening source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    // Opening destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return EXIT_FAILURE;
    }

    // Copying content from source to destination using fgetc and fputc
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Closing both files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully to %s\n", destFileName);
    return EXIT_SUCCESS;
}       
