#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book() {
        cout << "Book constructor called" << endl;
    }

    ~Book() {
        cout << "Book destructor called for " << title << endl;
    }

    void setDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
    }

    void display() const {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book book;
    book.setDetails();
    book.display();
    return 0;
}

