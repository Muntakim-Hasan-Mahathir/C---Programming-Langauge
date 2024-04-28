#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can drive.\n");
        return 0;
    }
    printf("You cannot drive.\n");
    return -1;
}