//abundant num
#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter num:"<<endl;
	cin>>n;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(n<sum){
		cout<<n<<" abundant"<<endl;
	}
	else{
		cout<<n<<" not abundant"<<endl;
	}
}
