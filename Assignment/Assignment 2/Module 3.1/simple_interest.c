#include <stdio.h>
#include <conio.h>

void main()
{
    float p, r, t, si;

    printf("Enter Principal amount: ");
    scanf("%f", &p);

    printf("Enter Rate of interest: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.3f", si);

    getch();
}
