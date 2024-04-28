#include <stdio.h>

int main()
{
    {
        int x = 10;
        printf("The current value of x: %d\n", ++x);
    }
    {
        int x = 10;
        printf("The value of x: %d\n", x++);
        printf("The current value of x: %d\n", x);
    }
    return 0;
}