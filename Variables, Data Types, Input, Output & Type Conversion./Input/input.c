#include <stdio.h>

int main()
{
    printf("Enter a character: ");
    int ch = getchar();
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("You enter %c character & %d integer.\n", ch, number);
    return 0;
}