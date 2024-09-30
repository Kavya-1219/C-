#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter no of elements:";
	cin>>n;
	int arr[n];
	cout<<"elements in array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	cout<<sum;
	
}
