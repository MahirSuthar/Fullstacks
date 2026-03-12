#include <stdio.h>
#include <conio.h>

struct employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void main() {
    struct employee e[5];
    int i;

    // Input
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Employee %d\n", i+1);

        printf("Enter Emp No: ");
        scanf("%d", &e[i].empno);

        printf("Enter Name: ");
        scanf("%s", e[i].empname);

        printf("Enter Address: ");
        scanf("%s", e[i].address);

        printf("Enter Age: ");
        scanf("%d", &e[i].age);
    }

    // Display
    printf("\nEmployee Details\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i+1);
        printf("Emp No: %d\n", e[i].empno);
        printf("Name: %s\n", e[i].empname);
        printf("Address: %s\n", e[i].address);
        printf("Age: %d\n", e[i].age);
    }

    getch();
}
