#include<stdio.h>
int main()
{
    int age, eligible, noteligible;
    printf("enter age");
    scanf("%d",&age);
    if(age>18)
    {
        printf("person is eligible");
    }
    else
    {
        printf("person is not eligible");
    }
    return 0;
}