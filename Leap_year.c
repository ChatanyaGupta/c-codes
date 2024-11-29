#include<stdio.h>
int main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
            printf("input year is leap year");
        else
            printf("input year is not leap year");    
    }
    else
    {
        if(year%4==0)
            printf("input year is leap year");
        else
            printf("input year is not leap year ");
    }
    return 0;
}