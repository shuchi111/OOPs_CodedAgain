#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void display()
		{
			cout<<"\nThis is in a base class";
		}
		void print()
		{
			cout<<"\nThis is print of base class";
		}
};
class Derived:public Base
{
	public:
		void display()
		{
			cout<<"\nThis is derived class";
		}
		void print()
		{
			cout<<"\nThis is a print of derived class";
		}
};
int main()
{
	Base *p;
	Derived D;
	p=&D;
	p->display();
	p->print();
	return 0;
}
