#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no of rows:";
	cin>>n;
	//right triangle
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	cout<<endl;
	
	// inverted right triangle
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	cout<<endl;
	//left
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	cout<<endl;
	//left inverted
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	cout<<endl;
	//pyramid
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j;
			
		}
		for(int j=i-1;j>=1;j--){
				cout<<j;
			}
		cout<<endl;
	}
	cout<<endl;
	// Hollow pyramid
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			if (j == 1 || j == (2 * i - 1) || i == n)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}
