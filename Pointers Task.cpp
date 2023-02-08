#include<iostream>
using namespace std;
int main()
{
	system("cls");
    cout<<"\n\n\t\t\tPress 1 to display the value and address of the variable."<<endl;
	cout<<"\t\t\tPress 2 to display the values & addresses of three different types of variables."<<endl;
	cout<<"\t\t\tPress 3 to display the addition of an integer."<<endl;
	cout<<"\t\t\tPress 4 to display five integers in an array using a pointer."<<endl;
	cout<<"\t\t\tPress 5 to display five floating-point values in an array."<<endl;
	cout<<"\t\t\tPress 6 for Exit."<<endl<<endl;
	int ch;
	start:
	cout<<"Enter the choice:"<<endl;
	cin>>ch;
	if(ch==1)
	{
		/*Write a program that inputs a number in an integer variable. It stores the address of the varable in apointer & then 
		display the value and address of the variable.*/
		int n, *ptr;
		cout<<"Enter an integer :: ";
		cin>>n;
		ptr=&n;
		cout<<"The value of n :: "<<n<<endl;
		cout<<"The address of n :: "<<ptr<<endl;
		goto start;
	}
	else if(ch==2)
	{
		/*Write a program that declares & initializes 3 variables of type int, float & char. The porogram stores the memory adressess of the variables n, f,
		& c then displays the values & memory addresses of these variables.*/
		int n=10;
		float f=25.18;
		char c='$';
		void *ptr;
		cout<<"The value of n :: "<<n<<endl;
		ptr=&n;
		cout<<"The address of n :: "<<ptr<<endl;
		cout<<"The value of f :: "<<f<<endl;
		ptr=&f;
		cout<<"The address of f :: "<<ptr<<endl;
		cout<<"The value of c :: "<<c<<endl;
		ptr=&c;
		cout<<"The address of c :: "<<ptr<<endl;
		goto start;
	}
	else if(ch==3)
	{
		/*Write a program that displays the addition of an integer by using indirection operator 
		with pointers to access the memory addressess of integer variables.*/
		int a, b, s, *p1, *p2;
		p1=&a;
		p2=&b;
		cout<<"Enter an integer ::"<<endl;
		cin>>*p1;
		cout<<"Enter an integer ::"<<endl;
		cin>>*p2;
		s=*p1+*p2;
		cout<<*p1<<" + "<<*p2<<" = "<<s<<endl;
		goto start;
	}
	else if(ch==4)
	{
		//Write a program to input five integers in an array & display them using a pointer.
		int marks[5];
		int *ptr;
		cout<<"Enter five marks :: "<<endl;
		for(int i=0;i<5;i++)
		cin>>marks[i];
		ptr=marks;
		cout<<"You entered the following values ::"<<endl;
		for(int i=0;i<5;i++)
		cout<<*ptr++<<"\t";
		goto start;
	}
	else if(ch==5)
	{
	//Write a program that inputs five floating-point values in an array & displays the values in reverse order.
	float arr[5], *ptr;
	int i;
	cout<<"Enter five floating-point values :: "<<endl;
	for(i=0;i<5;i++)
	cin>>arr[i];
	ptr=&arr[4];
	cout<<"The values in reverse order :: "<<endl;
	for( i=0;i<5;i++)
	cout<<*ptr--<<endl;
	goto start;
	}
	else if(ch==6)
	{
		exit(0);
	}
	else
{
cout<<"Your Choice is Invalid.\n        Please Enter Valid Choice for the further Process.\n";
goto start;
}
		system("pause");
}
