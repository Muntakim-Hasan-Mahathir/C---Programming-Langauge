#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age > 0) ? ((age >= 18) ? printf("You can drive.\n") : printf("You cannot drive.\n"))
              : printf("Invalid age.\n");
    return 0;
}