// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h> // Required for input/output functions like printf and scanf
#include <string.h> // Required for string manipulation functions like strcpy (though not strictly needed for scanf("%s"))

// Define the Student structure
struct Student {
    char name[50]; // Character array to store the student's name (up to 49 characters + null terminator)
    int roll_no;   // Integer to store the student's roll number
    float marks;   // Float to store the student's marks
};

int main() {
    struct Student student1; // Declare a variable of type struct Student

    // Read student data from the user
    printf("Enter Name: ");
    scanf("%s", student1.name); // Reads a single word for the name

    printf("Enter Roll: ");
    scanf("%d", &student1.roll_no); // Reads an integer for the roll number

    printf("Enter Marks: ");
    scanf("%f", &student1.marks); // Reads a float for the marks

    // Print the student's data
    printf("Name: %s | Roll: %d | Marks: %.0f\n", student1.name, student1.roll_no, student1.marks);

    return 0; // Indicate successful program execution
    
}