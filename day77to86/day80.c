// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll;
    int marks;
};
void writeStudentRecords(const char *filename, struct Student students[], int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Unable to open file for writing");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(file);
}
void readStudentRecords(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Unable to open file for reading");
        exit(EXIT_FAILURE);
    }
        struct Student student;
        while (fscanf(file, "%49s %d %d", student.name, &student.roll, &student.marks) == 3) {
            printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll, student.marks);
        }
        fclose(file);
    }
    int main(void) {
        struct Student students[] = {
            {"Asha", 101, 85},
            {"Ravi", 102, 92}
        };
        int count = sizeof(students) / sizeof(students[0]);
        const char *filename = "students.txt";
        writeStudentRecords(filename, students, count);
        readStudentRecords(filename);
        return 0;
    }