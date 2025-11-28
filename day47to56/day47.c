// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LEN 100
bool areAnagrams(const char *str1, const char *str2) {
    int count[256] = {0}; // Assuming ASCII character set

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Count frequency of each character in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    // Decrease frequency based on characters in str2
    for (int i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}   

// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
void findLongestWord(const char *sentence, char *longestWord) {
    int maxLength = 0;
    char word[MAX_LEN];
    int i = 0, j = 0;   
    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            if (j > maxLength) {
                maxLength = j;
                word[j] = '\0';
                strcpy(longestWord, word);
            }
            j = 0; // Reset for next word
        }
        if (sentence[i] == '\0') {
            break;
        }
        i++;
    }
}  

int main() {
    // Test for Anagrams
    char str1[MAX_LEN], str2[MAX_LEN];
    printf("Enter first string: ");
    fgets(str1, MAX_LEN, stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character
    printf("Enter second string: ");
    fgets(str2, MAX_LEN, stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    // Test for Longest Word
    char sentence[MAX_LEN];
    char longestWord[MAX_LEN];
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character

    findLongestWord(sentence, longestWord);
    printf("Longest word: %s\n", longestWord);

    return 0;
}   

