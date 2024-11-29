//wap to whether the given number is single digit , 2digit, 3 digit or more than 3
#include<stdio.h>
int main()
{
    int a;
    printf("enetr the value of a:");
    scanf("%d",&a);
    if(a>=1 && a<=9)
    {
        printf("a is single digit number");
    }
    else if(a>=10 && a<=99)
    {
        printf("a is double digit number");
    }
    else if (a>=100 && a<=999)
    {
        printf("a is 3 digit number");
    }
    else
    {
        printf("a is more than 3 digit number");
    }
    return 0;
}