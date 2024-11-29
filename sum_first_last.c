// wap to sum of 1st and last digit of a given number (lastdigit = N%10),,,,(first digit= N/10 ki power [no. of digits - 1])
//  to find the number of digits in a number, do log 10 and add 1 .. ex: 8224 => log to the base 10 of 8224  = 3 so number of digits are
//  3+1 = 4

#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d", &num);
    int digits = (int)log10(num) + 1;
    int firstdigit = num / pow(10, digits - 1);
    int lastdigit = num % 10;
    int sum = firstdigit + lastdigit;
    printf("Sum of first and last digit= %d", sum);
    return 0;
}