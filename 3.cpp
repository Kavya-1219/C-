#include <iostream>
#include <stdexcept>

void divide(int a, int b) {
    try {
        if (b == 0) {
            throw std::runtime_error("division by 0");
        }
        std::cout << "Result of division: " << a / b << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error in divide function: " << e.what() << std::endl;
        throw;  
    }
}

int main() {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    try {
        divide(num1, num2);
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception caught in main: " << e.what() << std::endl;
    }

    return 0;
}

