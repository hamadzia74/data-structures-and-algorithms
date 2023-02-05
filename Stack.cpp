#include<iostream>
using namespace std;
class Stack
{
	public:
		int arr[10], top;
		public:
			stack()
			{
				top=-1;
			}
			void push(int v)
			{
				if(top==9)
				cout<<"Stack is Full."<<endl;
				else
				{
					arr[++top]=v;
					cout<<"Data pushed successfully."<<endl;
				}
			}
			int pop()
			{
				if(top==-1)
				{
					cout<<"Stack Empty."<<endl;
					return NULL;
				}
				else
				return arr[top--];
			}
};
int main()
{
	Stack s;
	s.push(2);
	s.push(4);
	s.push(6);
	s.push(8);
	s.push(10);
	s.push(12);
	s.push(14);
	s.push(16);
	s.push(18);
	s.push(20);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	system("pause");
}
