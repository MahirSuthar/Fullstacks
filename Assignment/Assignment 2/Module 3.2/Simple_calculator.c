#include <stdio.h>
#include<conio.h>

void main() {
    int num1, num2, choice;

    printf("Simple Calculator\n");
    printf("1.Addition  2.Subtraction  3.Multiplication  4.Division  5.Modulo\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(choice) {
        case 1:
            printf("Result = %d\n", num1 + num2);
            break;
        case 2:
            printf("Result = %d\n", num1 - num2);
            break;
        case 3:
            printf("Result = %d\n", num1 * num2);
            break;
        case 4:
            printf("Result = %d\n", num1 / num2); 
            break;
        case 5:
            printf("Result = %d\n", num1 % num2);
            break;
        default:
            printf("Invalid choice!\n");
    }

    getch();
}
