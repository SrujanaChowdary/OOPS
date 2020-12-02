/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream> 
using namespace std; 

class Base 
{ 
int x; 
public: 
	virtual void fun() = 0; 
	int getX() { return x; } 
}; 

// This class inherits from Base and implements fun() 
class Derived: public Base 
{ 
	int y; 
public: 
	void fun() { cout << "fun() called"; } 
}; 

int main(void) 
{ 
	Derived d; 
	d.fun(); 
	return 0; 
} 

