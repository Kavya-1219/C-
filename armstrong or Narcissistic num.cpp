//armstrong or Narcissistic
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,rev;
	cout<<"enter a num:";
	cin>>n;
	int original=n;
	while(n!=0){
		rev=n%10;
		sum+=rev*rev*rev;
		n/=10;
	}
	if(original==sum){
	cout<<"armstrong";
	}else{
	cout<<"not armstrong";
	}
}
