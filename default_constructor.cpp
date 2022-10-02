// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  book {
  private:
    double length;

  public:
    // default constructor to initialize variable
    book() {
      length = 5.5;
      cout << "Creating a book." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  book wall1;
  return 0;
}
