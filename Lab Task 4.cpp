#include<iostream>
using namespace std;
class shape
{
	public:
		float height, width;
   virtual void getValues()
	{
		cout<<"Enter Height:"<<endl;
		cin>>height;
		cout<<"Enter Width:"<<endl;
		cin>>width;
	}
	virtual void showArea()
	{
		cout<<"Height is "<<height<<endl;
		cout<<"Width is "<<width<<endl;
	}
};
class triangle:public shape
{
	int r;
	void showArea()
	{
		shape::getValues();
	    r=0.5*height*width;
	    cout<<"Area of Triangle = "<<r<<endl;
	}
};
class rectangle:public shape
{
	int c;
	void showArea()
	{
		shape::getValues();
	    c=height*width;
	    cout<<"Area of Rectangle = "<<c<<endl;
	}
};
int main()
{
	system("CLS");
	shape *s;
	shape sh;
	s=&sh;
	s->getValues();	
	s->showArea();
	triangle t;
	s=&t;
	s->showArea();
	rectangle rec;
	s=&rec;
	s->showArea();
}
