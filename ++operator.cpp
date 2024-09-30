#include <iostream>
class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        ++*this;
        return temp;
    }
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};
int main() {
    Counter c(5);
    ++c;
    c.display(); 
    c++;
    c.display(); 
    return 0;
}

