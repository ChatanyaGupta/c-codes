#include<stdio.h>
int main()
{
    int a,b;
    int addition, subtraction, multiplication, remainder;
    printf("enter two integers:\n");
    scanf("%d %d",&a,&b);

    addition = a+b;
    subtraction = a-b;
    multiplication = a*b;
    remainder = a%b;

    printf("addition: %d + %d = %d\n", a,b,addition);
    printf("subtraction: %d - %d = %d\n", a,b,subtraction);
    printf("multiplication: %d * %d = %d\n", a,b,multiplication);
    printf("remainder: %d %% %d = %d\n", a,b,remainder);
    return 0;
}