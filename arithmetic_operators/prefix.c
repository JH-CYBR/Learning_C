#include <stdio.h>

int main ()

{
    int a = 13;
    int b = 14;
    int result = 0;
    /* notice the -- prefix. 
    This means the value of a will be printed one 
    value lower than initially assigned. it will print 12. 
    */  
    printf("c is %d\n", --a);
    return 0;

}