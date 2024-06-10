#include<stdio.h>

int main()
{
    int hr, min, sec, inp ;
    
    printf("Enter the seconds : ");
    scanf("%d", &inp);
    
    hr = inp / 3600;
    min = inp % 3600;
    min = min / 60;
    sec = inp % 60;
    
    printf("Hr : Min : Sec = %d hr : %d min : %d sec", hr, min, sec);
    
    return 0;
   
}