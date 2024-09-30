//happy number
#include<iostream>
using namespace std;
int main(){
	int n,sum,digit;
	cout<<"enter num:"<<endl;
	cin>>n;
	int original=n;
	while(n!=1&&n!=4){
		sum=0;
		while(n!=0){
			digit=n%10;
			sum+=digit*digit;
			n/=10;
		
		}
		n=sum;
	}
	if(n==1){
		cout<<original<<" happy num"<<endl;
	}
	else{
		cout<<original<<" not happy num"<<endl;
	}
}
