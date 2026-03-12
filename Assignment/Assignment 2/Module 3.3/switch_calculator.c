#include <stdio.h>
#include <conio.h>

void main() {
    int choice;
    float num1, num2, result;

    do {
        
        printf("\n===== Menu =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if(choice >=1 && choice <=4) {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Division: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed!\n");
                }
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please enter 1-5.\n");
        }
    } while(choice != 5);
    getch();
}
