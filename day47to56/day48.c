// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
#define MAX 100
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Check if lengths are equal
    if (len1 != len2) {
        return 0; // Not rotation
    }
    
    // Create a new string by concatenating str1 with itself
    char temp[2 * MAX];
    strcpy(temp, str1);
    strcat(temp, str1);
    
    // Check if str2 is a substring of the concatenated string
    if (strstr(temp, str2) != NULL) {
        return 1; // Rotation
    } else {
        return 0; // Not rotation
    }
}       

int main() {
    char str1[MAX], str2[MAX];
    
    // Input two strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    // Check if str2 is a rotation of str1
    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}


// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void reverseWord(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}   

void reverseEachWord(char str[]) {
    char* wordStart = str;
    char* temp = str; // Temp pointer to traverse the string
    
    while (*temp) {
        temp++;
        if (*temp == ' ' || *temp == '\0') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
    }
}

int main() {
    char str[MAX];
    
    // Input a sentence
    printf("Enter a sentence: ");
    fgets(str, MAX, stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    
    // Reverse each word in the sentence
    reverseEachWord(str);
    
    // Output the modified sentence
    printf("Modified sentence: %s\n", str);
    
    return 0;
}

