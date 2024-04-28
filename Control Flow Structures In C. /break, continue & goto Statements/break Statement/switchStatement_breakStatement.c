#include <stdio.h>

int main()
{
    int age = 15;
    switch (age)
    {
    case 18:
        printf("You are 18.\n");
        break;
    default:
        printf("You are not 18.\n");
        break;
    }
    return 0;
}