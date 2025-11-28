// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
enum Operation { ADD, SUBTRACT, MULTIPLY };
int main() {
    char operation[10];
    int num1, num2;
    
    // Read input
    scanf("%s %d %d", operation, &num1, &num2);
    
    enum Operation op;
    
    // Map string to enum
    if (strcmp(operation, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(operation, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(operation, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }
    
    // Perform operation based on enum value
    switch (op) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }
    
    return 0;
}       
