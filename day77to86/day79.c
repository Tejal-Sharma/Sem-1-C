// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    int number;
    int sum = 0;
    int count = 0;

    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return EXIT_FAILURE;
    }

    double average = (double)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return EXIT_SUCCESS;
}   
