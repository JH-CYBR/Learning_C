#include <stdio.h>
/* there are times when a program requires the user to enter data from their "terminal"
 * You can either request the data from the user or supply the info to the program at the time the
 * program is executed
 *
 * When the main function is called by the runtime system, two arguments are actually passed to the
 * function.
 *
 * 1. The first argument (argc for argument count) is an integer value that specifies the number
 * of arguments typed on the command line.
 *
 * 2. The second argument (argv for argument vector) is an array of character pointers (strings)
 *
 * Note: if you want to pass data to the program, you must have parameters in your main function.
 * */


int main(int argc, char *argv[]) {
   int numberOfArguments = argc;
   char *argument1 = argv[0];
   char *argument2 = argv[1];

    printf("the number or arguments : %d\n", numberOfArguments);
    printf("Argument 1 is the program name : %s\n", argument1);
    printf("argument 2 is the commandline argument : %s\n", argument2);
    return 0;
}

