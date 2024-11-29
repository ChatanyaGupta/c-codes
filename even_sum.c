//Wap to perform sum of all even numbers of a given number
#include <stdio.h>
int main() 
{
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) 
    {
        num = -num;
    }
    while (num > 0) 
    {
        digit = num % 10;
        if (digit % 2 == 0)
        {
            sum += digit; 
        }
        num /= 10;
    }
    printf("The sum of all even digits is: %d\n", sum);

    return 0;
}
