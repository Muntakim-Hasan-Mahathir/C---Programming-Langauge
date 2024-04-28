#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent!\N");
        break;
    case 'B':
        printf("Good!\n");
        break;
    case 'C':
        printf("Satisfactory.\n");
        break;
    case 'D':
        printf("Needs improvement.\n");
        break;
    case 'F':
        printf("Failed.\n");
        break;
    default:
        printf("Invalid grade.\n");
    }

    return 0;
}