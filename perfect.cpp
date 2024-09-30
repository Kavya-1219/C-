//perfect num
#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cout<<"enter a num:";
	cin>>n;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		cout<<"perfect number";
	}
	else{
		cout<<"not perfect number";
	}
}
