#include <iostream>
using namespace std;

class Calculator {
public:
   
    inline double multiply(double a, double b) {
        return a * b;
    }

    
    inline double cube(double n) {
        return n * n * n;
    }
};

int main() {
    Calculator calc;
    double val1, val2;

    cout << "Enter two numbers to multiply: ";
    cin >> val1 >> val2;
    cout << "Multiplication value: " << calc.multiply(val1, val2) << endl;

    cout << "\nEnter a number to find its cube: ";
    cin >> val1;
    cout << "Cubic value: " << calc.cube(val1) << endl;

    return 0;
}

