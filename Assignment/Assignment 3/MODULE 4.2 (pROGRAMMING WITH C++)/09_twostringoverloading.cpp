#include <iostream>
#include <string.h>
using namespace std;

class StringJoiner {
    char str[100]; // Character array to store string

public:
    // Function to take input
    void input() {
        cout << "Enter string: ";
        cin >> str;
    }

    // Overloading the '+' operator
    StringJoiner operator+(StringJoiner x) {
        StringJoiner temp;
        strcpy(temp.str, str);    // Copy first string to temp
        strcat(temp.str, x.str);  // Append second string to temp
        return temp;
    }

    // Function to display the result
    void display() {
        cout << str << endl;
    }
};

int main() {
    StringJoiner s1, s2, s3;

    cout << "For String 1:" << endl;
    s1.input();

    cout << "For String 2:" << endl;
    s2.input();

    // Using the overloaded '+' operator to concatenate
    s3 = s1 + s2;

    cout << "\nConcatenated String: ";
    s3.display();

    return 0;
}

