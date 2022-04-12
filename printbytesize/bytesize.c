#include<stdio.h>

// prints bytsize of specified data types.

int main ()

{

printf("%zd\n", sizeof(int));
printf("%zd\n", sizeof(char));
printf("%zd\n", sizeof(long));
printf("%zd\n", sizeof(long long));
printf("%zd\n", sizeof(double));
printf("%zd\n", sizeof(long double));
return 0;

}