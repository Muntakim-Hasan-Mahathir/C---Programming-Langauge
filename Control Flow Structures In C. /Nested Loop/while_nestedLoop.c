#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 5)
    {
        printf("%d table.\n", i);
        int j = 1;
        while (j <= 10)
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}