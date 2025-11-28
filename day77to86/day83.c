// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
int main() {
    char monthStr[4];
    printf("Enter month abbreviation (e.g., JAN, FEB): ");
    scanf("%3s", monthStr);

    enum Month month;
    if (strcmp(monthStr, "JAN") == 0) month = JAN;
    else if (strcmp(monthStr, "FEB") == 0) month = FEB;
    else if (strcmp(monthStr, "MAR") == 0) month = MAR;
    else if (strcmp(monthStr, "APR") == 0) month = APR;
    else if (strcmp(monthStr, "MAY") == 0) month = MAY;
    else if (strcmp(monthStr, "JUN") == 0) month = JUN;
    else if (strcmp(monthStr, "JUL") == 0) month = JUL;
    else if (strcmp(monthStr, "AUG") == 0) month = AUG;
    else if (strcmp(monthStr, "SEP") == 0) month = SEP;
    else if (strcmp(monthStr, "OCT") == 0) month = OCT;
    else if (strcmp(monthStr, "NOV") == 0) month = NOV;
    else if (strcmp(monthStr, "DEC") == 0) month = DEC;
    else {
        printf("Invalid month abbreviation\n");
        return 1;
    }

    switch (month) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }

    return 0;
} 

