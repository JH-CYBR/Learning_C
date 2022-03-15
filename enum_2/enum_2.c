#include <stdio.h>

int main ()

{
    enum direction {up = 10, down = 20, left = 30, right = 40};

    enum direction movementUp;
    movementUp = up;
    
    enum direction movementDown;
    movementDown = down;
   
    enum direction movementLeft;
    movementLeft = left;
   
    enum direction movementRight;
    movementRight = right;


    printf("%u\n", movementUp);
    printf("%u\n", movementDown);
    printf("%u\n", movementLeft);
    printf("%u\n", movementRight);
    return 0;
}