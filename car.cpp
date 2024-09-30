#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car() {
        cout << "Car constructor called" << endl;
    }

    ~Car() {
        cout << "Car destructor called for " << model << endl;
    }

    void setDetails() {
        cout << "Enter car model: ";
        getline(cin, model);
        cout << "Enter year of manufacture: ";
        cin >> year;
        cin.ignore(); 
    }

    void display() const {
        cout << "Car Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car;
    car.setDetails();
    car.display();
    return 0;
}

