#include <stdio.h>
#include <conio.h>

struct employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void main() {
    struct employee e;

    printf("Enter Employee Number: ");
    scanf("%d", &e.empno);

    printf("Enter Employee Name: ");
    scanf("%s", e.empname);

    printf("Enter Address: ");
    scanf("%s", e.address);

    printf("Enter Age: ");
    scanf("%d", &e.age);

    printf("\nEmployee Details\n");
    printf("Emp No: %d\n", e.empno);
    printf("Name: %s\n", e.empname);
    printf("Address: %s\n", e.address);
    printf("Age: %d\n", e.age);

    getch();
}
