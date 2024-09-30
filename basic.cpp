#include<iostream>
using namespace std;
int main(){
	int n,fact=1,next,n1=0,n2=1;
	cout<<"enter a num:";
	cin>>n;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<fact<<endl;
	//multiplication table
	for(int i=1;i<=10;i++){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	//fibonacci
	
	cout<<"fibonacci:"<<n1<<n2;
	for(int i=3;i<=n;i++){
		next=n1+n2;
		n1=n2;
		n2=next;
		cout<<next;
	}
	cout<<endl;
	//prime or not
	bool isprime=true;
	if(n<=1){
		isprime=false;
	}else{
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				isprime=false;
				break;
			}
		}
	}
	if(isprime){
		cout<<n<<" prime"<<endl;
	}
	else{
		cout<<n<<" not prime"<<endl;
	}
	//prime upto input
	for(int i=2;i<=n;i++){
		bool isprime=true;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				isprime=false;
				break;
			}
		}
		if(isprime){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	//number palindrome
	
	int original=n,rev,sum=0;
	while(n!=0){
		rev=n%10;
		sum=sum*10+rev;
		n/=10;
	}
	if(original==sum){
		cout<<sum<<" is palindrome"<<endl;
	}else{
		cout<<sum<<" is not palindrome"<<endl;
	}
	
	//string palindrome
	string str;
	cout<<"enter a string:";
	cin>>str;
	int start=0,end=str.length()-1;
	while(start<end){
		if(str[start]!=str[end]){
			cout<<"not palindrome"<<endl;
		}
		start++;
		end--;
		cout<<"palindrome"<<endl;
	}
	
	//sum of digits
	int k,result=0,digit;
	cout<<"enter num:";
	cin>>k;
	while(k>0){
	digit=k%10;
	result=result+digit;
	k/=10;
	}
	cout<<"sum="<<result<<endl;
}
	
