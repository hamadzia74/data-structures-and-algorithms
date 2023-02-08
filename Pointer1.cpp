#include<iostream>
using namespace std;
int main()
{
	int var1=3,var2=24,var3=17;
	cout<<&var1<<endl;
	cout<<&var2<<endl;
	cout<<&var3<<endl;
	int c=5, *pc;
	cout<<"Address of c (&c):"<<&c<<endl;
	cout<<"Value of c(c):"<<c<<endl;
	 pc=&c;
	cout<<"Address that pointer pc holds (pc):"<<pc<<endl;
	cout<<"Content of the address pointer pc holds (*pc):"<<*pc<<endl;
	c=11;
	cout<<"Address pointer pc holds (pc):"<<pc<<endl;
	cout<<"Content of the address pointer pc holds (*pc):"<<*pc<<endl;
	*pc=2;
	cout<<"Address of c (&c):"<<&c<<endl;
	cout<<"Value of c(c):"<<c<<endl;
	system("pause");
}
