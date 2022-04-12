#include<stdio.h>

int main ()
{
int scoreEntered = 0;
int big = 90;

printf("please enter a number to see if you won: ");
scanf("%d", &scoreEntered);

if (scoreEntered > big)
    printf("jackpot!\n");

// this block forces the user to win. No matter what number they enter, it will continue adding until its greater than the big var. 
// take note of the curly braces in this block. 
if (scoreEntered < big) {
    scoreEntered++;
    printf("You win becase I added numbers.\n");
}

    return 0;
}