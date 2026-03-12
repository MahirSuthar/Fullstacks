#include <stdio.h>
#include <conio.h>

void main()
{
    float r, l, b, base, h;
    float area_circle, area_rectangle, area_triangle;


    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area_circle = 3.14 * r * r;


    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    area_rectangle = l * b;

    
    printf("Enter base of triangle: ");
    scanf("%f", &base);
    printf("Enter height of triangle: ");
    scanf("%f", &h);
    area_triangle = 0.5 * base * h;

    printf("Area of Circle = %.2f\n", area_circle);
    printf("Area of Rectangle = %.2f\n", area_rectangle);
    printf("Area of Triangle = %.2f\n", area_triangle);
	
	getch();
    
}
