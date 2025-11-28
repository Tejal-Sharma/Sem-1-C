// Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll;
    int marks;
};
int main()
{
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Sample input
    strcpy(student->name, "Tina");
    student->roll = 105;
    student->marks = 88;

    printf("Name: %s | Roll: %d | Marks: %d\n", student->name, student->roll, student->marks);

    free(student);
    return 0;
}