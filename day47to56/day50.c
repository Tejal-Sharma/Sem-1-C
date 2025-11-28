// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main() {
    int day, year;
    char month[4];
    
    // Read the input date in dd/04/yyyy format
    scanf("%d/%*d/%d", &day, &year);
    
    // Set the month to "Apr"
    snprintf(month, sizeof(month), "Apr");
    
    // Print the date in dd-Apr-yyyy format
    printf("%02d-%s-%d\n", day, month, year);
    
    return 0;
}   


// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    
    // Read the input string
    scanf("%s", str);
    
    int len = strlen(str);
    
    // Generate and print all substrings
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf(",");
        }
    }
    
    // Remove the last comma by printing a backspace character
    printf("\b \n");
    
    return 0;
}   