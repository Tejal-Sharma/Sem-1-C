// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
int lengthOfLongestSubstring(char * s){
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int index[256] = {0}; // ASCII character set

    for (int end = 0; end < n; end++) {
        char currentChar = s[end];
        start = start > index[(unsigned char)currentChar] ? start : index[(unsigned char)currentChar];
        maxLength = maxLength > (end - start + 1) ? maxLength : (end - start + 1);
        index[(unsigned char)currentChar] = end + 1; // Update the last seen index
    }
    return maxLength;
}   
int main() {
    char s[MAX_LEN];
    printf("Enter the string: ");
    scanf("%s", s);
    int result = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", result);
    return 0;
}