#include <stdio.h>
#include <string.h>
#include <conio.h>

// Structure Example
struct Employee {
    int empno;
    char name[50];
    int age;
};

// Union Example
union EmployeeUnion {
    int empno;
    char name[50];
    int age;
};

void main() {
    struct Employee e1;
    union EmployeeUnion u1;

    // Structure me values
    e1.empno = 101;
    strcpy(e1.name, "Vikas");
    e1.age = 22;

    printf("Structure:\n");
    printf("Emp No: %d\n", e1.empno);
    printf("Name: %s\n", e1.name);
    printf("Age: %d\n", e1.age);

    // Union me values
    u1.empno = 101;
    strcpy(u1.name, "Vikas"); // overwrite empno
    u1.age = 22;              // overwrite name

    printf("\nUnion:\n");
    printf("Emp No: %d\n", u1.empno);  // shows garbage
    printf("Name: %s\n", u1.name);     // shows garbage or correct string depending on system
    printf("Age: %d\n", u1.age);       // only last stored value correct

    getch();
}
