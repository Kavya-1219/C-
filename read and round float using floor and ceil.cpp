#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    cout << "Nearest integer using floor: " << floor(num) << endl;
    cout << "Nearest integer using ceil: " << ceil(num) << endl;

    return 0;
}

