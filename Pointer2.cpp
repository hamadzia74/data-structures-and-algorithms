#include<iostream>
using namespace std;
int main()
{
	int arr[3], *ptr;
	cout<<"Enter an integer:"<<endl;
	for(int i=0;i<=2;i++)
	{
	cin>>arr[i];
	ptr=&arr[i];
   cout<<"The value of an array ::"<<*ptr<<endl;
   cout<<"The Address of an Array :: "<<ptr<<endl;
   }
  /* 	{
	cin>>arr[i];
	ptr=&arr[i];
   cout<<"Value of an arr[ "<<i<<"]="<<*ptr<<endl;
   cout<<"Address of an arr[ "<<i<<"]="<<ptr<<endl;
   }*/
   	system("pause");
}
