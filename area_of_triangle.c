#include<stdio.h>
int main()
{
    int area, base, height;
    printf("Enter the value of base:");
    scanf("%d",&base);
    printf("Enter the value of height:");
    scanf("%d",&height);

    area = 0.5*base*height;
    printf("Area of triangle: %d",area);

    return 0;
}