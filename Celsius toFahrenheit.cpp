//celsius and Fahrenheit using function
#include <iostream>
using namespace std;
double tofahrenheit(double celsius){
	return (celsius * 9.0/5.0)+32.0;
}
double tocelsius(double fahrenheit){
	return (fahrenheit -32.0)* 5.0/9.0;
}
int main(){
	double celsius,fahrenheit;
	cout<<"enter temp in celsius:"<<endl;
	cin>>celsius;
	cout<<tofahrenheit(celsius);
	cout<<"enter temp in fahrenheit:"<<endl;
	cin>>fahrenheit;
	cout<<tocelsius(fahrenheit);
}


