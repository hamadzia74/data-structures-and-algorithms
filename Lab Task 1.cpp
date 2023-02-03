// Write a C++ Program to show the original & reverse order of values also calculate the sum of an array.
#include<iostream>
using namespace std;
int main()
{
	int arr[5], sum=0;
	for(int i=0;i<5;i++)
	{
	cout<<"Enter "<<i+1<<" value :"<<endl;
	cin>>arr[i];
    }
    cout<<"The Original Order of Values :"<<endl;
    for(int i=0;i<5;i++)
    {
    cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"The Reverse Order of Values :"<<endl;
    for(int i=4;i>=0;i--)
    {
    cout<<arr[i]<<endl;
    }
    cout<<endl;
   for(int i=0;i<5;i++)
	{
	sum=sum+arr[i];
    }
    cout<<"The Sum of the Following Values are "<<sum<<endl<<endl;
    system("pause");
 } 
