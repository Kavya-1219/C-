//strong number
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,digit;
	cout<<"enter num:"<<endl;
	cin>>n;
	int original=n;
	while(n!=0){
		digit=n%10;
		int fact=1;
		for(int i=1;i<=digit;i++){
			fact=fact*i;
		}
		sum+=fact;
		n/=10;
	}
	if(original==sum){
		cout<<original<<" strong number"<<endl;
	}else{
		cout<<original<<" not strong number"<<endl;
	}
}
