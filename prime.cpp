#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    cout << is_prime(9);  
    return 0;
}

