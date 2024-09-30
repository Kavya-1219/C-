#include <iostream>

class Compare {
private:
    int value;
public:
    Compare(int v) : value(v) {}

    bool operator==(const Compare& obj) {
        return value == obj.value;
    }
};

int main() {
    Compare c1(50), c2(50), c3(30);
    std::cout << "c1 == c2: " << (c1 == c2) << std::endl;
    std::cout << "c1 == c3: " << (c1 == c3) << std::endl;
    return 0;
}

