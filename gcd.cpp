//gcd
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter 2 numbers:";
	cin>>a>>b;
	do{
		if(a>b){
		a=a-b;
		}else{
			b=b-a;
		}		
	}while(a!=b);
	cout<<"gcd is "<<a;
	
}
