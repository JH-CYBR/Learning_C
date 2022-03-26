#include <stdio.h>

int main ()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;
    // the single & is the bitwise operator. 
    result = a & b;

    printf("result is %d", result);
    return 0;
}

// Don't really understand this topic yet. Need to get more time with it. 