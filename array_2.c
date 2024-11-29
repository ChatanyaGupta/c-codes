#include<stdio.h>
int main()
{
    int arr[4][3];
    printf("Enter array elements:");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);  // Corrected this line
        }
    }
    printf("array elements are :\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
