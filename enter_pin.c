#include <stdio.h>
int main()
{
    int pin;
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    
    if (pin > 999)
    {
        printf("It is valid\n");
    }
    else
    {
        printf("It is not valid\n");
    }
    
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int pin;
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    
    if (pin > 999)
    {
        printf("It is valid\n");
    }
    else
    {
        printf("It is not valid\n");
    }
    
    return 0;
}

*/