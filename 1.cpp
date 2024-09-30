#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    int n;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    try {
        if (n < 0) {
            throw std::invalid_argument("negative size of an array is not allowed");
        } else if (n == 0) {
            throw std::invalid_argument("array size cannot be 0");
        } else if (n > 20) {
            throw std::invalid_argument("array size cannot be larger");
        }

        std::vector<int> arr(n);
        std::cout << "Enter " << n << " integers:" << std::endl;
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << "Array elements are: ";
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

