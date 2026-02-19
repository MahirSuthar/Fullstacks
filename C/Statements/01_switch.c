#include<stdio.h>
#include<conio.h>

void main(){
	
	char op;
	int a;
	int b;
	int result;
	
	printf("Enter the First value : ");
	scanf("%d",&a);
	
	printf("\nEnter the operator (+,-,*,/): ");
	scanf(" %c",&op); 
	
	printf("\nEnter the Second value : ");
	scanf("%d",&b);
	
	switch(op) {
        case '+':
            result = a + b;
            printf("\nResult: %d", result);
            break;
        case '-':
            result = a - b;
            printf("\nResult: %d", result);
            break;
        case '*':
            result = a * b;
            printf("\nResult: %d", result);
            break;
        case '/':
            result = a / b;
            printf("\nResult: %d", result);
            break;
        default:
            printf("Error: Invalid operator!");
    }	
	
	getch();
}

