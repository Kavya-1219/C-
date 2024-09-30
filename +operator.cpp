#include <iostream>

class Add {
private:
    int value;
public:
    Add(int v) : value(v) {}

    Add operator+(const Add& obj) {
        return Add(value + obj.value);
    }

    int getValue() const {
        return value;
    }
};

int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    Add a1(x), a2(y);
    Add a3 = a1 + a2;
    std::cout << "Sum: " << a3.getValue() << std::endl;
    return 0;
}

