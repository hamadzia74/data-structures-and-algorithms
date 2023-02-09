#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
   	int num;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	cout<<"The Factorial is: "<<factorial(num)<<endl;
	system("pause");
    }  
int factorial(int a)
{
	if(a==0)
	return 1;
	else
	return a*factorial(a-1);
}
