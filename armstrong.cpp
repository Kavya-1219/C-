//armstrong or Narcissistic
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,sum=0,digits=0,rev;
	cout<<"num:"<<endl;
	cin>>n;
	int original=n;
	while(n!=0){
		n/=10;
		digits++;
	}
	n=original;
	while(n!=0){
		rev=n%10;
		sum+=pow(rev,digits);
		n/=10;
	}
	if(original==sum){
		cout<<original<<" is Narcissistic"<<endl;
	}
	else{
		cout<<original<<" is not Narcissistic"<<endl;
	}
}
