// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_DEPT_LENGTH 50
#define FILENAME "employee_data.bin"
struct Employee
{
    int id;
    char name[MAX_NAME_LENGTH];
    char department[MAX_DEPT_LENGTH];
    float salary;
};
void writeEmployeeData(const char *filename)
{
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        perror("Error opening file for writing");
        return;
    }
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Employee Department: ");
    scanf(" %[^\n]", emp.department);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("Employee details stored successfully.\n");
}
void readEmployeeData(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        perror("Error opening file for reading");
        return;
    }
    struct Employee emp;
    fread(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
}
int main()
{
    writeEmployeeData(FILENAME);
    readEmployeeData(FILENAME);
    return 0;
}