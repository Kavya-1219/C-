#include <iostream>

class Print {
private:
    int value;
public:
    Print(int v) : value(v) {}

    friend std::ostream& operator<<(std::ostream& os, const Print& obj) {
        os << "Value: " << obj.value;
        return os;
    }
};

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    Print p(x);
    std::cout << p << std::endl;
    return 0;
}

