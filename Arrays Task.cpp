#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n\n\t\t\tPress 1 to count the number of times the item is found in an array."<<endl;
	cout<<"\t\t\tPress 2 to calculate CGPA using array."<<endl;
	cout<<"\t\t\tPress 3 to reverses a string and prints it on the screen."<<endl;
	cout<<"\t\t\tPress 4 for Exit."<<endl<<endl;
	int ch;
	start:
	cout<<"Enter the choice:"<<endl;
	cin>>ch;
	/*Create an array that can hold ten integers, and get input from user. Display those values on the screen, and then prompt the user for an integer.
    Search through the array, and count the number of times the item is found.*/
	if(ch==1)
	{
	int arr[10], n, count=1;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter "<<i+1<<" integer ::"<<endl;
		cin>>arr[i];
	}
	cout<<"The Values in an array are::";
	for(int i=0;i<10;i++)
	cout<<" "<<arr[i]<<" ";
	cout<<endl<<endl;
	for(int i=0;i<10;i++)
	{
		if(arr[i]==-1)
		continue;
		n=arr[i];
		for(int j=i+1;j<10;j++)
		{
			if(arr[j]==n)
			{
				count++;
				arr[j]=-1;
			}
		}
		cout<<n<<" is stored "<<count<<" times in the array."<<endl;
	}
	goto start;
}
/*Create a C++ program to calculate CGPA using array. Number of Courses, grades will given by user.*/
else if(ch==2)
{
	float a[100], b[100], n, a1=0, average_GPA, total_credits=0, Total_GPA, CGPA;
	for(int j=0;j<2;j++)
	{
	cout<<"Enter the Record of "<<j+1<<" Semester."<<endl;
	{
	cout <<"Enter the No. of Courses:  "; 
	cin>>n;
	cout<<endl;
	cout<<endl; 
	for (int i=0; i<n;i++)
	{	
		cout <<"Enter the credit hours for course "<< i+1<<":  ";
		cin >> a[i];
		cout<<"Enter the grade you earned for the course"<<endl;
		cout<<"The Grade A= 4, B= 3, C= 2, D= 1 ::";
		cin>>b[i];
		cout<<endl;
		average_GPA = a[i] * b[i];
		a1 = average_GPA + a1;
		total_credits = a[i] + total_credits;
	}
		Total_GPA = a1 / total_credits; 
		cout<<"Yours total GPA for the semester "<<j+1<<" is "<<Total_GPA<<endl<<endl;
		cout<<"!!Congratulation You have Passed in this Semester!!"<<endl;
}
cout<<endl;
}
for(int j=0;j<2;j++)
CGPA=(Total_GPA)/2;
cout<<"Yours Total CGPA is "<<CGPA<<endl<<endl;
goto start;
}
/*Write a program that reverses a string and prints it on the screen.*/
else if(ch==3)
{
	string arr[10],n;
	cout<<"Enter the name ::"<<endl;
	for(int i=0;i<=9;i++)
	cin>>arr[i];
	cout<<"The Name in an array is :: ";
	for(int i=0;i<=9;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"The Name in Resverse order is :: ";
	for(int i=9;i>=0;i--)
	cout<<arr[i]<<" ";
	cout<<endl<<endl;
	goto start;
}
else if(ch==4)
{
	exit(0);
}
else
{
cout<<"Your Choice is Invalid.\n\tPlease Enter Valid Choice for the further Process.\n";
goto start;
}
system("pause");
}
