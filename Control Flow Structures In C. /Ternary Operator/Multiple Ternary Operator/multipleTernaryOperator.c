#include <stdio.h>

int main()
{
    int x = 1;
    int y = (x >= 10) ? 10 / 2 : (x == 0) ? 0
                                          : 10 * 2;
    printf("The current value of y is %d\n", y);
    return 0;
}