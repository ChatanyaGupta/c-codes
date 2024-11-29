#include<stdio.h>

int main()
 {
    float area_of_circle, radius, perimeter, sides, square, l, b, area_of_rectangle;

    printf("Enter radius: ");
    scanf("%f", &radius);
    area_of_circle = 3.141 * radius * radius;
    printf("Area of Circle: %f\n", area_of_circle);

    perimeter = 2 * 3.141 * radius;
    printf("Perimeter of Circle: %f\n", perimeter);

    printf("Enter side of the square: ");
    scanf("%f", &sides);
    square = sides * sides;
    printf("Area of Square: %f\n", square);

    printf("Enter the values of length and breadth: ");
    scanf("%f %f", &l, &b);
    area_of_rectangle = l * b;
    printf("Area of Rectangle: %f\n", area_of_rectangle);

    return 0;
}
