//harshad
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,digit;
	cout<<"enter num:"<<endl;
	cin>>n;
	int original=n;
	while(n!=0){
		digit=n%10;
		sum+=digit;
		n/=10;
	}
	if(original%sum==0){
		cout<<original<<" harshad num"<<endl;
	}
	else{
		cout<<original<<" not harshad num"<<endl;
	}
}
