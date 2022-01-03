#include <stdio.h>


/* this is another example of a basic c function. 
You will notice the main function calls the "larger" function */

int larger (int a, int b)
{
    if (a > b)
    return a;
    return b;
}


/* the "larger" function is called by the "main" function */
int main ()
{
    int greatest = larger(100, 1000);
    printf("%i is the greatest!\n", greatest);
    return 0;
}


