// wap to read a number fro user and perform the sum of their digits
#include<stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("Enter num: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;  // Extract the last digit
        if (rem % 2 == 0) // Check if the digit is even
        {
            sum += rem;   // Add the even digit to sum
        }
        num = num/10;   // Remove the last digit
    }

    printf("Sum of even digits = %d", sum);
    return 0;
}
