// Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

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
void display(struct Student *s)
{
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);
}
int main()
{
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Modifying values using pointer to struct
    strcpy(s->name, "John");
    s->roll = 106;
    s->marks = 91;

    // Displaying modified data
    display(s);

    // Free allocated memory
    free(s);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll;
    int marks;
};
void display(struct Student *s)
{
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);
}
int main()
{
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Modifying values using pointer to struct
    strcpy(s->name, "John");
    s->roll = 106;
    s->marks = 91;

    // Displaying modified data
    display(s);

    // Free allocated memory
    free(s);

    return 0;
}