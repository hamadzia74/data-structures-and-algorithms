#include<iostream>
using namespace std;
class account
{
	public:
		int Account_Balance, Wdraw, Credit, Debit;
		public:
			account()
			{
				Account_Balance=1000;
			}
			void withdraw()
			{
				cout<<"Enter amount you want to withdraw"<<endl;
				cin>>Wdraw;
				cout<<"You Withdraw "<<Wdraw<<" Amount."<<endl;
			}
			void debit()
			{
				Debit=Account_Balance-Wdraw;
				cout<<"Your Debit Amount is "<<Debit<<endl;
			}
			void credit()
			{
				cout<<"Enter amount you want to add:"<<endl;
				cin>>Credit;
				Credit=Account_Balance+Credit;
				cout<<"Your Current Credit is "<<Credit<<endl;
			}
			void statement()
			{
				cout<<"!!!! Thank You For Using Our Service !!!!"<<endl;
			}
};
int main()
{
	account obj;
	int balance, choice;
	cout<<"Enter your Amount Balance:"<<endl;
	cin>>balance;
	cout<<endl;
	cout<<endl;
	cout<<"Press 1 for Amount to Withdraw."<<endl;
	cout<<"Press 2 for Amount to Adding in Account."<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Enter Your Choice:"<<endl;
	cin>>choice;
	if(choice==1)
	{
		obj.withdraw();
		obj.debit();
	}
	else if(choice==2)
	{
	   obj.credit();
	}
	obj.statement();
	system("pause");
}
