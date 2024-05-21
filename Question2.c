#include <stdio.h>
void main()
{
    int a = 5, b = 6, c;

    printf("\nGiven value of a,b : %d,%d", a, b);

    c = b;

    b = a;
    a = c;

    printf("\nNew value of a,b : %d,%d", a, b);
}