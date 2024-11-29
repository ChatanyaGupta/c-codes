//wap to count a number of digit in a given number using nuilt - in function (log 10 nikaalke + 1 kr denge )
#include<stdio.h>
int main ()
{
    int num,digits=0;
    printf("Enter number:");
    scanf("%d",&num);
    while(num !=0)
    {
        num =num/10;
        digits++;
    }
    printf("Number of digits are %d",digits);
    return 0;
}