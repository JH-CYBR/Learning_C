#include<stdio.h>
// tests to see if a provided number is even or odd. 
int main ()

{
    //you can declare more than one variable using one data type. 
    int numberToTest, remainder;
    printf("Enter the number you wish to test: ");
    scanf("%i", &numberToTest);

    // sets remainder equal to numbeToTest and uses the modulus operator to evaluate the numberToTest divided by 2
    remainder = numberToTest % 2;

    // Evaluates if the remainder is equal to 0 and provides terminal output. 
    if (remainder == 0)
        printf("the number is even.\n");
    else
        printf("the number is odd.\n");
    return 0;
}

