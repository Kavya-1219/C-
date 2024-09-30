//reverse string
#include <iostream>
#include <string>
using namespace std;
string reverse(string s) {
    string reversed;
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: " << reverse(str) << endl;
}

