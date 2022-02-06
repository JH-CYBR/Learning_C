#include <stdio.h>

int main(void) {
    /* This is to help my understanding of format specifiers
     * A format specifiers are used when displaying variables as output.
     * They specify the type of data of the variable to be displayed
     * There are two arguments in the printf function, the first argument is the text the printf function will display
     * The second argument "sum" tells the format specifier that it needs to be mapped to the variable "sum" where it is declared.
     * */
    int integerVar = 100;
    float floatVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatVar = %f\n", floatVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    return 0;
}

