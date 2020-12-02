#include <iostream>
using namespace std;
class A {
    string i;
    public:
        A(string s)
        {
        	i=s;
            cout<<"constructor "<<s<<endl;
        }
        ~A()
        {
            cout<<"Destructor "<<i<<endl; 
			
	    }
};
 
A a1("Global");
void func()
{
	A a3("local");
}
 
int main()
{
    A a2("Main");
    func();
}

