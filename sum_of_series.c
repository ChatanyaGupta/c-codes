// wap to add the sum of series
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of N :");
    scanf("%d",&n);
    for (int i=1; i<=n ; i++)
    {
       sum = sum + i;
    }
    printf("sum of series = %d",sum);
    return 0;
}    