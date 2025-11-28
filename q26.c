//Q51: Write a program to print the following pattern:
   // 5
  // 45 
 // 345
 // 2345
//12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main() {
    int i, j, k;
    for (i = 5; i >= 1; --i) {
        for (k = 5; k > i; --k) {
            printf(" ");
        }
        for (j = i; j <= 5; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 5; ++i) {
        for (j = 1; j <= 5; ++j) {
            if (j == 1 || j == i || i == 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
