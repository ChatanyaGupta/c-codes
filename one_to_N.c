//wap to print the number from 1 to N
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++)
    {
        printf("%d ",i);
    }
    return 0;
}