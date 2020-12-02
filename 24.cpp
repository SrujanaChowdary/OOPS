
#include<iostream>
using namespace std;

//Increment and decrement overloading
class Inc {
	private:
		int count ;
	public:
		Inc() {
			//Default constructor
			count = 0 ;
		}
		
		Inc(int C) {
			// Constructor with Argument
			count = C ;
		}

		Inc operator ++ () {
			// Operator Function Definition
			// for prefix
			return Inc(++count);
		}

		Inc operator ++ (int) {
			// Operator Function Definition
			// with dummy argument for postfix
			return Inc(count++);
		}

		Inc operator -- () {
			// Operator Function Definition
			// for prefix
			return Inc(--count);
		}

		Inc operator -- (int) {
			// Operator Function Definition
			// with dummy argument for postfix
			return Inc(count--);
		}

		void display(void) {
			cout << count << endl ;
		}
};

int main() {
	Inc a, b(4), c, d, e(1), f(4);

	cout << "Before using the operator ++()\n";
	cout << "a = ";
	a.display();
	cout << "b = ";
	b.display();

	//++a;
	//b++;


	a = ++a;
	b = b++;

	cout << "Result prefix (on a) and postfix (on b)\n";
	cout << "a = ";
	a.display();
	cout << "b = ";
	b.display();

	cout << "Before using the operator --()\n";
	cout << "e = ";
	e.display();
	cout << "f = ";
	f.display();

	e=--e;
	f=f--;

	cout << "Result prefix (on e) and postfix (on f)\n";
	cout << "e = ";
	e.display();
	cout << "f = ";
	f.display();
        
        return 0;
}

