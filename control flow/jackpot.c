#include<stdio.h>

int main ()
// just a simple program that compares what the user entered to a preinitialied variable. If the user enters a number above 90, they win. 
{
int scoreEntered = 0;
int big = 90;

printf("please enter a number to see if you won: ");
scanf("%d", &scoreEntered);

if (scoreEntered > big)
    printf("jackpot!\n");

if (scoreEntered < big)
    printf("you loose!\n");

    return 0;
}