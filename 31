
#include <iostream>
using namespace std;
class MyClass {
  public:
    void myFunction() {
      cout << " parent class.\n" ;
    }
};
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << " another class.\n" ;
    }
};
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

