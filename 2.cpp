#include <iostream>
#include <stdexcept>

int main() {
    int n;
    std::cout << "Enter the size of the array (n): ";
    std::cin >> n;

    if (n > 0) {
        int denominator;
        std::cout << "Enter the denominator: ";
        std::cin >> denominator;

        int arr[n];
        std::cout << "Enter " << n << " array values: ";
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            try {
                if (denominator == 0) {
                    throw std::runtime_error("Division by zero");
                }
                int result = arr[i] / denominator;
                if (result < 0) {
                    throw std::runtime_error("Negative division");
                }
                std::cout << "Result: " << result << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
                    }
    } else {
        std::cout << "Invalid input. n should be greater than 0." << std::endl;
    }

    return 0;
}

