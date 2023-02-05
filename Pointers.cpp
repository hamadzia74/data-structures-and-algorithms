#include<iostream>
using namespace std;
void swapping_fun(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"Results After Swapping :: "<<endl;
	cout<<"The Value of first integer is "<<*x<<endl;
	cout<<"The Value of second integer is "<<*y<<endl;
}
int main()
{
	int ch;
	cout<<"Enter Your Choice :: "<<endl;
	cin>>ch;
	if(ch==1)
	{
	int n, *ptr;
		cout<<"Enter an integer :: ";
		cin>>n;
		ptr=&n;
		cout<<"The value of pointer :: "<<*ptr<<endl;
		cout<<"The address of pointer :: "<<ptr<<endl;
		cout<<"The size of n :: "<<sizeof(*ptr)<<endl;
	}
	else if(ch==2)
	{
	int a, b;
	cout<<"Enter an integer :: "<<endl;
	cin>>a;
	cout<<"Enter an integer :: "<<endl;
	cin>>b;
	cout<<"Results before Swapping :: "<<endl;
	cout<<"The Value of first integer is "<<a<<endl;
	cout<<"The Value of second integer is "<<b<<endl;
	swapping_fun(&a,&b);
	}
	else
	{
		cout<<"!!!Your Choice isn't Valid!!!"<<endl;
	}
	return 0;
}
