#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b;
	cout<<"enter two integers:";
	cin>>a>>b;
	cout<<"addition of "<<a <<" & "<<b<<" is: "<<a+b<<endl;
	cout<<"subtraction of "<<a <<" & "<<b<<" is: "<<a-b<<endl;
	cout<<"multiplication of "<<a <<" & "<<b<<" is: "<<a*b<<endl;
	cout<<"division of "<<a <<" & "<<b<<" is: "<<a/b<<endl;
	cout<<"modulo of "<<a <<" & "<<b<<" is: "<<fmod(a,b)<<endl;
}


/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
        cout << "Modulo: " << fmod(num1, num2) << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
        cout << "Modulo: Undefined (division by zero)" << endl;
    }
   

    return 0;
}*/

