//min max using fuun
#include <iostream>
using namespace std;
int Min(int arr[],int n){
	int min=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
int Max(int arr[],int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int n;
	cout<<"enter num of elements:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elements in array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"min: "<<Min(arr,n)<<endl;
	cout<<"max: "<<Max(arr,n)<<endl;
}
