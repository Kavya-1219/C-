#include<iostream>
using namespace std;
class bankaccount  {
	private:
		long accountnumber;
		string accountholder;
		double balance;
		public:
			bankaccount(int  accnum,string  accholder,double balance){
				accountnumber =acc num;
				account holder=acc holder;
				balance=bal;
				cout<<"acount  created successfully"<<endl;
			}
			~bankaccount (){
				cout<<"account deleated"<<endl;
			}
			void dispalydetails()
			{
				cout<<"account number:"<<account number<<endl;
				cout<<"account holder:"<<account holder<<endl;
				cout<<"balance"<<balance<<endl;
			}
};
int main()
{
	banckaccount account("123456789","lohi",10000);
	acccount.displaydetails();
	return 0;
}
