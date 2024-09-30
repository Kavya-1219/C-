//factorial using function
#include<iostream>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
int main(){
	int n;
	cout<<"enter a num:";
	cin>>n;
	if(n>=0){
		cout<<"factorial of "<<n<<":"<<factorial(n)<<endl;
	}
	else{
		cout<<"invalid input"<<endl;
	}
}

/*
//without using function


#include<iostream>
using namespace std;
int main(){
	int n,fact=1;
	cout<<"enter a number:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		
		fact*=i;
		
	}
	cout<<"factorial of "<<n<<" is "<<fact<<endl;
}
*/
