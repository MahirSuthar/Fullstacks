#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1, num2;

public:
    // Constructor to initialize numbers
    MaxFinder(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Friend function declaration
    friend void findMax(MaxFinder m);
};

// Friend function definition
void findMax(MaxFinder m) {
    if (m.num1 > m.num2) {
        cout << "Maximum number is: " << m.num1 << endl;
    } else if (m.num2 > m.num1) {
        cout << "Maximum number is: " << m.num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Create object and pass values
    MaxFinder obj(a, b);

    // Call friend function
    findMax(obj);

    return 0;
}

