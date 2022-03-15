#include <stdio.h>

int main ()

{
    double width;
    double height;
    double perimeter;
    double area;

    printf("Please enter the width:");
    scanf("%lf", &width);
    
    printf("Please enter the height:");
    scanf("%lf", &height);

    perimeter = (width + height) * 2;
    area = width * height;

    printf("The perimeter is: %lf\n", perimeter);
    printf("The area is: %lf\n", area);
    return 0;
}