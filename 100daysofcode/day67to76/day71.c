// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>
int main() {
    FILE *file;
    char name[50];
    int age;

    // Taking user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);

    // Creating and opening the file in write mode
    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Writing data to the file
    fprintf(file, "Name: %sAge: %d\n", name, age);

    // Closing the file
    fclose(file);

    // Confirmation message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}   