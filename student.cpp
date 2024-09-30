//student
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student() {
        cout << "Student constructor called" << endl;
    }
    ~Student() {
        cout << "Student destructor called for " << name << endl;
    }
    void setDetails() {
        cout << "Enter student name: ";
        cin>>name;
        cout << "Enter student age: ";
        cin >> age; 
    }
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student s;
    s.setDetails();
    s.display();
}

