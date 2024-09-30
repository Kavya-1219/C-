#include<iostream>
using namespace std;
class sum{
	public:
		int n;
		int sum=0;
		void read();
		void findsum();
		void display();
		
};
void sum::read(){
	cout<<"n";
	cin>>n;
}
void sum::findsum(){
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
}
void sum::display(){
	cout<<sum;
}
int main(){
	sum s;
	s.read();
	s.findsum();
	s.display();
}
