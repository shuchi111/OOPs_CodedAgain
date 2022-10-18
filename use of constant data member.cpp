#include<iostream>
using namespace std;
class abc
  public:
void assign()
{
  data=20;
}
void changedata()const
{
  int data=40;
  cout<<" \data:"<<data;
}};
int main()
{
  abc s;
  s.assign();
  s.show();
  s.changedata();
  s.show();
}


// output
/*data=20
  cannot change the data constant member function 
  data=20
  */
