 #include<iostream>
 using namespace std;
 int main(){
 	//largest 
	int n1,n2,n3;
 	cout<<"enter 3 numbers:";
 	cin>>n1>>n2>>n3;
 	int largest=(n1>n2?(n1>n3?n1:n2):(n2>n3?n2:n3));
 	cout<<"largest num is:"<<largest<<endl;
 	//2 numbers equal or not
 	string equal=(n1==n2)?" equal to ":" not equal to ";
 	cout<<n1<<equal<<n2<<endl;
 	string Equal=(n1==n2&&n2==n3)?" all are equal ":" all are not equal ";
 	cout<<Equal<<endl;
 	//divisible by 3
 	string divisible=(n1%3==0)?"divisible" : "not divisible";
 	cout<<n1<<" is "<<divisible<<" by 3"<<endl;
 }
