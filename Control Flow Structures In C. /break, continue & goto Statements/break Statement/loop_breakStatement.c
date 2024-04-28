#include <stdio.h>

int main()
{
    for (int i = 0; 1; i++)
    {
        if (i >= 10)
        {
            break;
        }
        printf("Hello, World!\n");
    }
    return 0;
}