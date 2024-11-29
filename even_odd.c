#include<stdio.h>
int main()
{
    int n, even,odd;
    printf("Enter the value of the number");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("n is even");
    }
    else
    {
        printf("n is odd");
    }
    return 0;
}