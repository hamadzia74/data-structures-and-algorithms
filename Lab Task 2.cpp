#include<iostream>
using namespace std;
int main()
{
	int arr[10], i, j, min, temp;
	for(i=0;i<10;i++)
	{
	cout<<"Enter "<<i+1<<" value :"<<endl;
	cin>>arr[i];
    }
    cout<<"The original values in array:"<<endl;
    for(i=0;i<10;i++)
    cout<<arr[i]<<" ";
    for(i=0;i<9;i++)
    {
    	min=i;
    	for(j=i+1;j<10;j++)
    	if(arr[j]<arr[min])
    	min=j;
    	if(min!=i)
    	{
    		temp=arr[i];
    		arr[i]=arr[min];
    		arr[min]=temp;
		}
	}
	cout<<endl;
	cout<<"The Sorted Array:"<<endl;
	for(i=0;i<10;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
    system("pause");
}
