//wap to perform the sum of all elements of 2D array
#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    
    printf("Enter the number of columns:");
    scanf("%d", &cols);

    int array[rows][cols];
    int sum = 0;
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }
    printf("The sum of all elements in the 2D array is: %d\n", sum);

    return 0;
}
