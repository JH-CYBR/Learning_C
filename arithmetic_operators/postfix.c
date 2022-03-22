#include <stdio.h>

int main ()

{
    int a = 13;
    int b = 14;
    int result = 0;
    /* notice the -- postfix. 
    This means the value of a will be printed one in the next line of code.
    You will have to use the output in a new expression for its new value to show up.  
    it will print 13. 
    */  
    printf("c is %d\n", a--);
    return 0;

}