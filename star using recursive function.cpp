#include<iostream>
using namespace std;
int star(int x);
int main()
{
	int h, a, b;
	cout<<"Enter the height of a triangle"<<endl;
	cin>>h;
	star(h);
	system("pause");
}
int star(int x)
{
	if(x<=0)
	{
		exit(0);
	}
	else
	{
	int b;
	for(b=1;b<=x;b++)
	{
		cout<<"*";
	}
	cout<<endl;
	star(x-1);}
}
