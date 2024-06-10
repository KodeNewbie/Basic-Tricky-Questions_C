#include <stdio.h>
void main()
{
    int a = 49;

    int r = a % 10;
    int num = a + r;
    
    printf("\nNext Multiple of 10 for %d is : %d", a, (num/10)*10);
}