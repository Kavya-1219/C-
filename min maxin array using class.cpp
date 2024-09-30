#include<iostream>
using namespace std;
class minmax{
	public:
		int size;
		int a[];
		void read();
		void findmin();
		void findmax();
};
void minmax::read(){
		cout<<"Size = ";
		cin>>size;
		for(int i=0;i<size;i++){
			cin>>a[i];
		}
}
void minmax::findmin(){
	int min=a[0];
	for(int i=0;i<size;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	cout<<"Minimum = "<<min<<endl;
}
void minmax::findmax(){
	int max=a[0];
	for(int i=0;i<size;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<"Maximum = "<<max;
}

int main(){
	minmax s;
	s.read();
	s.findmin();
	s.findmax();
	
}
