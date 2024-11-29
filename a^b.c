#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, res;

    printf("Enter the values of base and power: ");
    scanf("%d%d", &a, &b);

    res = (int)pow(a, b);

    printf("Power = %d",(int)pow(a,b));
    return 0;
}