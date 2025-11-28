// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h> // Required for strcmp

// Define the enum for Gender
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

// Define the struct Person
typedef struct {
    char name[50];
    Gender gender;
} Person;

int main() {
    // Create a Person object
    Person p1;

    // Assign values
    strcpy(p1.name, "John Doe");
    p1.gender = MALE;

    // Print the person's gender
    printf("Person's Gender: ");
    if (p1.gender == MALE) {
        printf("Male\n");
    } else if (p1.gender == FEMALE) {
        printf("Female\n");
    } else {
        printf("Other\n");
    }

    // Another example with FEMALE
    Person p2;
    strcpy(p2.name, "Jane Doe");
    p2.gender = FEMALE;

    printf("Person's Gender: ");
    if (p2.gender == MALE) {
        printf("Male\n");
    } else if (p2.gender == FEMALE) {
        printf("Female\n");
    } else {
        printf("Other\n");
    }

    return 0;
}