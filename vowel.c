#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(ch=='a' ||ch=='A'||ch=='E'|| ch=='e'||ch=='I'|| ch=='i'|| ch=='O'|| ch=='o' || ch=='U'|| ch=='u')
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is consonant");
    }
    return 0;
}