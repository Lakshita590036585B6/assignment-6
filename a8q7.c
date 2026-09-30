#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[50], lastName[50], fullName[100];

    printf("Enter first name: ");
    scanf("%49s", firstName);

    printf("Enter last name: ");
    scanf("%49s", lastName);

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Complete name: %s\n", fullName);

    return 0;
}