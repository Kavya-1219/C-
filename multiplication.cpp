#include<iostream>
#include<string>
using namespace std;

//mul table
/*int main()
{
	int n;
	cout<<"enter table num:";
	cin>>n;
	for(int i=1;i<=10;i++){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
}*/

//palindrome

/*int main(){
	int n,sum=0,rev;
	cout<<"enter a number:";
	cin>>n;
	int original=n;
	while(n>0)
	{
			rev=n%10;
			sum=sum*10+rev;
			n=n/10;
	}

	if(original==sum){
		cout<<sum<<" is a palindrome"<<endl;
	}
	else{
		cout<<sum<<" is not a palindrome"<<endl;
	}
}*/

//string palindrome
int main()
{
	string str,strlen,rev;
	cout<<"enter a string:";
	cin>>str;
	for(int i=str.length()-1;i>=0;i--)
	{
		rev+=str[i];
	}
	if(str==rev)
	{
		cout<<rev<<" is palindrome"<<endl;
	}
	else
	{
		cout<<rev<<" is not palindrome";
	}
}


