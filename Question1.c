#include <stdio.h>

int main()
{
    int a = 5, b = 6;
    printf("\nGiven value of a,b : %d,%d", a, b);
    b = a + b; // b =11
    a = b - a; // a =11-5= 6
    b = b - a; // b =11-6= 5
    printf("\nNew value of a,b : %d,%d", a, b);

    return 0;
}