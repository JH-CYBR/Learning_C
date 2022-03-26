#include <stdio.h>

int main ()
{
    _Bool a = 1;
    _Bool b = 0;
    _Bool result;
    result = a && b;

    printf("%d", result);
    return 0;
}

// for some reason this program wont provide terminal output. Not sure if I did something wrong.