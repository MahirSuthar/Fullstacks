#include <iostream>
using namespace std;

class Swapper {
private:
    int a, b;

public:
    // Constructor to initialize values
    Swapper(int n1, int n2) {
        a = n1;
        b = n2;
    }

    // Declaration of friend function
    friend void swapNumbers(Swapper &s);

    void display() {
        cout << "A: " << a << ", B: " << b << endl;
    }
};

// Friend function definition
void swapNumbers(Swapper &s) {
    // Swapping logic without a third variable
    s.a = s.a + s.b; // s.a now holds the sum
    s.b = s.a - s.b; // s.b now holds the original value of s.a
    s.a = s.a - s.b; // s.a now holds the original value of s.b
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Swapper obj(x, y);

    cout << "\nBefore Swapping:" << endl;
    obj.display();

    // Passing object by reference to the friend function
    swapNumbers(obj);

    cout << "\nAfter Swapping:" << endl;
    obj.display();

    return 0;
}

