//wap to read a number from user and perfoem the sum of therir digit
#include<stdio.h>
int main ()
{
    int num, sum=0, rem;
    printf("Enter number :");
    scanf("%d",&num);
    while(num !=0)
    {
        rem= num%10;
        sum += rem;
        num = num/10;
    }
    printf("Sum of digit=%d",sum);
    return 0;
}