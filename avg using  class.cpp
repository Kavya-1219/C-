#include<iostream>
using namespace std;
class average{
	public:
		int a[5];
		int avg=0;
		void read();
		void findavg();
		void display();
		
};
void average::read(){
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
}
void average::findavg(){
	for(int i=0;i<5;i++){
		avg+=a[i];;
	}
	avg=avg/5;
}
void average::display(){
	cout<<avg;
}
int main(){
	average s;
	s.read();
	s.findavg();
	s.display();
}
