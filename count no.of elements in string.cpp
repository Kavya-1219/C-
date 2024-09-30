#include <iostream>
//#include <string>
using namespace std;
int count(const string&str){
	return str.length();
}
int main(){
	string str;
	cout<<"enter a string:"<<endl;
	getline(cin,str);
	cout<<"noof elements:"<<count(str)<<endl;
}

