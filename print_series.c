#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    for (int i=1; i<=n ; i++)
    {
        printf("%d",i*i);
    }
    return 0;
}    