#include <stdio.h>

enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    enum week day;
    day = Thursday;
    printf("%d", day);
    return 0;
}
