//Wap to print the area of circle,square and rectangle on the basis of user choice
#include<stdio.h>

int main()
 {
    float area_of_circle, radius, square, sides, l, b, area_of_rectangle;

    printf("Enter radius: ");
    scanf("%f", &radius);
    area_of_circle = 3.141 * radius * radius;
    printf("Area of Circle: %f\n", area_of_circle);

    printf("Enter side of the square: ");
    scanf("%f", &sides);
    square = sides * sides;
    printf("Area of Square: %f\n", square);

    printf("Enter the values of length and breadth: ");
    scanf("%f %f", &l, &b);
    area_of_rectangle = l * b;
    printf("Area of Rectangle= %f\n", area_of_rectangle);

    return 0;
}
