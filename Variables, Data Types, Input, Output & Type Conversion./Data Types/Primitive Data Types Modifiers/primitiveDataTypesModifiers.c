#include <stdio.h>

extern int __Number;

int main()
{
    signed int number = 10;
    int __number = 10;
    unsigned int Number = 10;
    short int NUMBER = 100;
    long int __NUMBER__ = 100000000;
    auto int ___NUMBER___ = 10;
    int _NUMBER_ = 10;
    const double pi = 3.141592;
    printf("extern int __Number = %d\n", __Number);
    return 0;
}