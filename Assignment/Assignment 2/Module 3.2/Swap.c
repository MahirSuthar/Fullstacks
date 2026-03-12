#include <stdio.h>
#include <conio.h>

void main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);


    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

	getch();
}
