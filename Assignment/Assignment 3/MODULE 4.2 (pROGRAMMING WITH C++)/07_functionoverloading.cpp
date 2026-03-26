#include <iostream>
using namespace std;

class Calculator {
public:
    // 1. Addition for two integers
    int calculate(int a, int b) {
        cout << "Adding Integers: ";
        return a + b;
    }

    // 2. Subtraction for two doubles (Different types)
    double calculate(double a, double b) {
        cout << "Subtracting Doubles: ";
        return a - b;
    }

    // 3. Multiplication for three integers (Different number of parameters)
    int calculate(int a, int b, int c) {
        cout << "Multiplying Three Integers: ";
        return a * b * c;
    }

    // 4. Division with a specific label (Different parameter sequence/type)
    void calculate(double a, int b) {
        if (b != 0)
            cout << "Division (Double/Int): " << a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
};

int main() {
    Calculator calc;

    // Calls the int, int version
    cout << calc.calculate(10, 5) << endl;

    // Calls the double, double version
    cout << calc.calculate(10.5, 2.5) << endl;

    // Calls the version with 3 parameters
    cout << calc.calculate(2, 3, 4) << endl;

    // Calls the double, int version
    calc.calculate(15.0, 3);

    return 0;
}

