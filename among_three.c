#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a>=b && a>=c) 
    {
       printf("a is the greatest");
    } 
    else if (b>=a && b>=c) 
    {
        printf("b is the greatest");
    } 
    else 
    {
        printf("c is the greatest");
    }
    return 0;
}