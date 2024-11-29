#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,average;
    printf("enter the value of sub1,sub2,sub3,sub4,sub5");
    scanf("%d,%d,%d,%d,%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    average=(sub1+sub2+sub3+sub4+sub5)/5;
    if(average>=90)
    {
        printf("A+");
    }
    else if(average>=80 && average<=90)
    {
        printf("A");
    }
    else if(average>=70 && average<=80)
    {
        printf("B+");
    }
    else if(average>=60 && average<=70)
    {
        printf("B");
    }
    else if(average>=50 && average<=60)
    {
        printf("C");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}