#include <iostream>
using namespace std;

class Matrix {
    int arr[5]; // Fixed size 1D array

public:
    // Function to accept array elements
    void accept() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    // Overloading '+' operator
    Matrix operator+(Matrix x) {
        Matrix temp;
        for (int i = 0; i < 5; i++) {
            temp.arr[i] = arr[i] + x.arr[i];
        }
        return temp;
    }

    // Function to display array elements
    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;

    cout << "For Matrix 1:" << endl;
    m1.accept();

    cout << "For Matrix 2:" << endl;
    m2.accept();

    // Using the overloaded '+' operator
    m3 = m1 + m2;

    cout << "\nMatrix 1: "; m1.display();
    cout << "Matrix 2: "; m2.display();
    cout << "Addition Result: "; m3.display();

    return 0;
}

