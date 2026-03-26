#include <iostream>
using namespace std;

class Calculator {
public:
   
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc; 
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

   
    switch(op) {
        case '+': cout << "Result: " << calc.add(num1, num2) << endl; break;
        case '-': cout << "Result: " << calc.subtract(num1, num2) << endl; break;
        case '*': cout << "Result: " << calc.multiply(num1, num2) << endl; break;
        case '/': cout << "Result: " << calc.divide(num1, num2) << endl; break;
        default: cout << "Invalid operator!" << endl;
    }

    return 0;
}

