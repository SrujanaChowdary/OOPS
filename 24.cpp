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
			return Inc(count+1);
		}

		Inc operator ++ (int) {
			// Operator Function Definition
			// with dummy argument for postfix
			return Inc(count+1);
		}

		Inc operator -- () {
			// Operator Function Definition
			// for prefix
			return Inc(count-1);
		}

		Inc operator -- (int) {
			// Operator Function Definition
			// with dummy argument for postfix
			return Inc(count-1);
		}

		void display(void) {
			cout << count << endl ;
		}
};

int main() {
    int i,j,k,l;
    cout<<"enter values for a,b:";
    cin>>i>>j;
    cout<<"enter values for e,f:";
    cin>>k>>l;
	Inc a(i), b(j), e(k), f(l);
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

