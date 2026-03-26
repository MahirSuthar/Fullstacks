#include <iostream>
using namespace std;

// Base Class: Level 1
class Students {
protected:
    int roll_number;

public:
    void get_roll_number(int r) {
        roll_number = r;
    }

    void put_roll_number() {
        cout << "Roll Number: " << roll_number << endl;
    }
};

// Derived Class: Level 2 (Inherits from Students)
class Test : public Students {
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float m1, float m2) {
        sub1 = m1;
        sub2 = m2;
    }

    void put_marks() {
        cout << "Marks in Subject 1: " << sub1 << endl;
        cout << "Marks in Subject 2: " << sub2 << endl;
    }
};

// Derived Class: Level 3 (Inherits from Test)
class Result : public Test {
    float total;

public:
    void display() {
        total = sub1 + sub2; // Accesses marks from Test
        put_roll_number();   // Accesses roll from Students (via Test)
        put_marks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result student1;

    // Setting data using the multilevel chain
    student1.get_roll_number(101);
    student1.get_marks(85.5, 92.0);

    cout << "----- Student Result -----" << endl;
    student1.display();

    return 0;
}

