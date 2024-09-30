#include <iostream>
using namespace std;
bool ispalindrome(string str){
	int start=0,end=str.length()-1;
	while(start<end){
		if(str[start]!=str[end]){
			return false;
		}
		start++;
	end--;
	return true;
	}
}
int main(){
	string str;
	cout<<"enter a string:"<<endl;
	cin>>str;
	if(ispalindrome(str)){
		cout<<str<<" palindrome"<<endl;
	}
	else{
		cout<<str<<" not palindrome"<<endl;
	}
}
