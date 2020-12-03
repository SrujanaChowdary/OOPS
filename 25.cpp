#include<iostream>
using namespace std;
class complex {
    int a, b;
    static int c;
public:

    void getvalue() {
        cout << "Enter the value of Complex Number- "<<c<<" a,b:";
        cin >> a>>b;
        c++;
    }

    complex operator+(complex ob) {
        complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        return (t);
    }

    complex operator-(complex ob) {
        complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }
    complex operator*(complex ob) {
        complex t;
        t.a = a * ob.a;
        t.b = b * ob.b;
        return (t);
    }

    void display() {
        cout << a << "+" <<"("<< b <<")"<< "i" << endl;
    }
};
int complex:: c=1;
int main() {
    complex obj1, obj2, result, result1,result2;

    obj1.getvalue();
    obj2.getvalue();

    result = obj1 + obj2;
    result1 = obj1 - obj2;
    result2=obj1*obj2;

    cout << "Input Values:"<<endl;
    obj1.display();
    obj2.display();

    cout << "Result:";
    cout<<endl<<"Addition ";
	result.display();
	cout<<endl<<"subtraction ";
    result1.display();
    cout<<endl<<"Multiplication ";
    result2.display();
    
    
    return 0;
}
