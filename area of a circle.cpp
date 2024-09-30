#include <iostream>
using namespace std;
double area(double r){
	double pi=3.14;
	return pi*r*r;
}
int main(){
	int r;
	cout<<"radius:"<<endl;
	cin>>r;
	cout<<"area:"<<area(r)<<endl;
}

