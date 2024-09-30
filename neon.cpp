//neon num
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,digit,num;
	cout<<"enter num:"<<endl;
	cin>>n;
	int original=n;
	num=n*n;
	while(num!=0){
		digit=num%10;
		sum+=digit;
		num/=10;
	}
	if(original==sum){
		cout<<original<<" neon";
	}
	else{
		cout<<original<<" not neon";
	}
}
