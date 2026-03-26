#include <iostream>
#include <string>
using namespace std;

// Base Class 1
class Person {
protected:
    string name;
    int age;

public:
    void readPerson() {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Base Class 2
class Teacher {
protected:
    float salary;

public:
    void readTeacher() {
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayTeacher() {
        cout << "Salary: " << salary << endl;
    }
};

// Derived Class (Inheriting from both Person and Teacher)
class Student : public Person, public Teacher {
private:
    float percentage;

public:
    void readStudent() {
        readPerson();   // From Person
        readTeacher();  // From Teacher
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void displayStudent() {
        cout << "\n--- Student Record ---" << endl;
        displayPerson();   // From Person
        displayTeacher();  // From Teacher
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Student s;

    cout << "Input Student/Teacher Data:" << endl;
    s.readStudent();

    s.displayStudent();

    return 0;
}

