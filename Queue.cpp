
/*Error*/
#include<iostream>
using namespace std;
int queue[10], n=10, front=-1, back=-1;
	void insert()
	{
   int item;
   if (front==-1)
   {
      front=0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>item;
      back++;
      queue[back]=item;
   }
   else 
   {
       if (back==n-1)
      cout<<"!!!Queue is full!!!"<<endl;
   }
}
void remove()
 {
   if (front==-1 || front>back)
   {
      cout<<"!!!Queue is empty";
   } 
   else 
   {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
}
void display() 
{
   if (front==-1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i=front; i<=back; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}
int main()
{
	int choice;
   cout<<"Press 1 Insert element to queue"<<endl;
   cout<<"Press 2 Delete element from queue"<<endl;
   cout<<"Press 3 Display all the elements of queue"<<endl;
   cout<<"Press 4 Exit"<<endl;
do
{
   cout<<"Enter your choice : "<<endl;
   cin>>choice;
   switch (choice)
    {
      case 1: insert();
         break;
      case 2: remove();
         break;
      case 3: display();
         break;
      case 4: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
   }
   }
while(choice!=4);
	system("pause");
}
