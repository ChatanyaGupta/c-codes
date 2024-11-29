#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the value of N :");
    scanf("%d",&n);
    for (int i=n; i>=1 ; i--)
    {
      fact = fact*i;
    }
    printf("factorial = %d",fact);
    return 0;
}    