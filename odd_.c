#include<stdio.h>
int main()
{
    int  num;
    printf("enter a integer\n");
    scanf("%d",&num);
    if (num%2==0){
        printf("th value is even\n");
    }
    else{
        printf("the number is odd");
    }
    return 0;
    
}