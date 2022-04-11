#include<stdio.h>
#include<math.h>

int main ()

{
    double minutesProvided = 0.0;
    double minutesInYear = 0.0;
    double days = 0.0; 
    double years = 0.0;

    printf("Please enter the number of minutes: ");
    scanf("%lf", &minutesProvided);
    
    minutesInYear = (60.0 * 24.0 * 365.0);
    years = (minutesProvided / minutesInYear);
    days = ((minutesProvided / 60.0) / 24.0);

    printf("%f minutes is approximately %f years and %f days\n", minutesProvided, years, days);

    return 0;
}