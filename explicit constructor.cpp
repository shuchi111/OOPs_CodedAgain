#include<iostream>
using namespace std;
class A
{
int a,b;
public:
A( int x, int y)
{
a=x;
b=y;
cout<<" the value of a and b are :";
cout<<a<<endl;
cout<<b<<endl;
}
void sum()
{ 
cout<<"sumis =" << a+b;
}
};
int main()
{
A al=A(10,30);
cout<<endl;
al.sum();
return 0;
}
