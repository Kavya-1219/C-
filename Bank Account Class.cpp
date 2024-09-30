#include<iostream>
using namespace std;
class account{
	private:
		string name;
		double balence;
		public:
			account(){
				cout<<"account constructor called"<<endl;
			}
			~account(){
				cout<<"account distructor called for "<< name<<endl;
			}
			void setdetails(){
				cout<<"enter name:"<<endl;
				cin>>name;
				cout<<"initial balence:"<<endl;
				cin>>balence;
			}
			void display(){
				cout<<"name:"<<name<<endl; 
				cout<<"balence:"<<balence<<endl;
			}
};
int main(){
	account s;
	s.setdetails();
	s.display()
;}

