#include<iostream>
using namespace std;
struct node
{
	int element;
	node *next;
};
class linked_list
{
	public:
		node *head, *rear;
		linked_list()
		{
			head=NULL;
			rear=NULL;
		}
		void enquee(int val)
		{
			node *temp=new node;
			temp->element=val;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				rear=temp;
			}
			else 
			{
			rear->next=temp;
			rear=rear->next;
		}
		}
		void dequee()
		{
			node *trash;
	        trash = head;
	        head = head->next;
	        delete trash;
		}
		void show()
		{
			node *head=this->head;
			int i=1;
			while(head)
			{
				cout<<i<<":"<<head->element<<endl;
				head=head->next;
				i++;
			}
		}
};
int main()
{
	linked_list obj;
	obj.enquee(2);
	obj.enquee(3);
	obj.enquee(12);
	obj.enquee(3);
	obj.dequee();
	obj.show();
	system("pause");
}
