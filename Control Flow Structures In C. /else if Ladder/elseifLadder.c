#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 0)
    {
        printf("Invalid age.\n");
        return -1;
    }
    else if (age >= 18)
    {
        printf("You can drive.\n");
    }
    else
    {
        printf("You cannot drive.\n");
        return -1;
    }
    return 0;
}