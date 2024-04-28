#include <stdio.h>

int main()
{
    printf("Odd numbers\n");
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}