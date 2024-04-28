#include <stdio.h>

int main()
{
    int x = 10;
    int y = (x >= 10) ? 10 / 2 : 10 * 2;
    printf("The current value of y is %d\n", y);
    return 0;
}