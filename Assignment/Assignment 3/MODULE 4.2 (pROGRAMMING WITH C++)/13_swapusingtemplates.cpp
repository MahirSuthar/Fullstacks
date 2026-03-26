#include <iostream>
using namespace std;

// Template function to swap two values of any type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Swapping Integers
    int i1 = 10, i2 = 20;
    cout << "Before swap (int): " << i1 << ", " << i2 << endl;
    swapValues(i1, i2);
    cout << "After swap (int):  " << i1 << ", " << i2 << endl;

    // Swapping Doubles
    double d1 = 5.5, d2 = 9.9;
    cout << "\nBefore swap (double): " << d1 << ", " << d2 << endl;
    swapValues(d1, d2);
    cout << "After swap (double):  " << d1 << ", " << d2 << endl;

    // Swapping Characters
    char c1 = 'A', c2 = 'B';
    cout << "\nBefore swap (char): " << c1 << ", " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swap (char):  " << c1 << ", " << c2 << endl;

    return 0;
}

