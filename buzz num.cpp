//buzz num
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter num:"<<endl;
	cin>>n;
	if(n%7==0||n%10==7){
		cout<<n<<" buzz num"<<endl;
	}
	else{
		cout<<n<<" not buzz num"<<endl;
	}
}
