#include <iostream>
#include <string>

class Converter {
public:
    std::string input;

    void toUpperCase() {
        for (int i = 0; i < input.length(); i++) {
            input[i] = toupper(input[i]);
        }
    }

    void toLowerCase() {
        for (int i = 0; i < input.length(); i++) {
            input[i] = tolower(input[i]);
        }
    }
};

int main() {
    Converter converter;

    std::cout << "Enter a string: ";
    std::getline(std::cin, converter.input);

    converter.toUpperCase();
    std::cout << "Uppercase string: " << converter.input << std::endl;

    converter.toLowerCase();
    std::cout << "Lowercase string: " << converter.input << std::endl;

    return 0;
}


