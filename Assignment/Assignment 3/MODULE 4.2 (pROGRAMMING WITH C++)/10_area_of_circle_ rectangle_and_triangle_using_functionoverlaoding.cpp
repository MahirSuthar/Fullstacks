#include <iostream>
using namespace std;

class Shape {
public:
    // 1. Circle: Area = PI * r * r
    double area(double radius) {
        return 3.14159 * radius * radius;
    }

    // 2. Rectangle: Area = length * breadth
    double area(double length, double breadth) {
        return length * breadth;
    }

    // 3. Triangle: Area = 0.5 * base * height
    double area(float base, float height) {
        return 0.5 * base * height;
    }
};

int main() {
    Shape s;

    // Circle
    cout << "Area of Circle (radius 5): " << s.area(5.0) << endl;

    // Rectangle
    cout << "Area of Rectangle (10x5): " << s.area(10.0, 5.0) << endl;

    // Triangle (using float values to match the 3rd function signature)
    cout << "Area of Triangle (base 4, height 6): " << s.area(4.0f, 6.0f) << endl;

    return 0;
}

