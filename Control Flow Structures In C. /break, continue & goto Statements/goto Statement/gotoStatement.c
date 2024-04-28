#include <stdio.h>

int main()
{
    int age = 15;
    if (age >= 18 && age > 0)
    {
        goto end;
    }
    else
    {
        goto error;
    }
end:
    return 0;
error:
    return -1;
}