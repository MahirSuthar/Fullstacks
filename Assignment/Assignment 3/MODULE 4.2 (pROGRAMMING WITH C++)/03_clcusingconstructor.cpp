#include <iostream>
using namespace std;

class Operations {
private:
    double num1, num2;

public:
    
    Operations(double n1, double n2) {
        num1 = n1;
        num2 = n2;
        cout << "Values initialized: " << num1 << " and " << num2 << endl;
    }

    
    void add() { cout << "Addition: " << num1 + num2 << endl; }
    void subtract() { cout << "Subtraction: " << num1 - num2 << endl; }
    void multiply() { cout << "Multiplication: " << num1 * num2 << endl; }
    void divide() {
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Division: Error! Cannot divide by zero." << endl;
    }
};

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

   
    Operations op(a, b);

   
    op.add();
    op.subtract();
    op.multiply();
    op.divide();

    return 0;
}

