#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() {
        cout << "Rectangle constructor called" << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }

    void setDetails() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDetails();
    rect.display();
    return 0;
}

