#include <iostream>
using namespace std;

class Shape {
public:
    double area;

    // Constructor for a rectangle
    Shape(double length, double width) {
        area = length * width;
    }

    // Constructor for a triangle
    Shape(double base, double height, bool isTriangle) {
        area = 0.5 * base * height;
    }

    void displayArea() {
        cout << "The area is: " << area << endl;
    }
};

int main() {
    double length, width, base, height;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    Shape rectangle(length, width);
    rectangle.displayArea();

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    Shape triangle(base, height, true);
    triangle.displayArea();

    return 0;
}

