// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void printInitials(const char *name)
{
    int n = strlen(name);
    int i;

    for (i = 0; i < n; i++)
    {
        // Print the first character and any character following a space
        if (i == 0 || (name[i - 1] == ' ' && isalpha(name[i])))
        {
            printf("%c.", toupper(name[i]));
        }
    }
    printf("\n");
}
int main()
{
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    // Remove newline character if present
    name[strcspn(name, "\n")] = 0;
    printInitials(name);
    return 0;
}

// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void printInitialsWithSurname(const char *name)
{
    int n = strlen(name);
    int i;

    for (i = 0; i < n; i++)
    {
        // Print the first character and any character following a space, except for the last word
        if ((i == 0 || (name[i - 1] == ' ' && isalpha(name[i]))) && (strchr(name + i, ' ') != NULL))
        {
            printf("%c.", toupper(name[i]));
        }
    }

    // Print the surname (last word)
    const char *lastSpace = strrchr(name, ' ');
    if (lastSpace != NULL)
    {
        printf(" %s\n", lastSpace + 1);
    }
    else
    {
        printf("\n"); // In case there's no surname
    }
}
int main()
{
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    // Remove newline character if present
    name[strcspn(name, "\n")] = 0;
    printInitialsWithSurname(name);
    return 0;
}