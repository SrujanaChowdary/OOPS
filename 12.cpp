#include<iostream>
using namespace std;
class operations
{
	int num;
	public:
		operations(int number=0)
		{
			num=number;
		}
		operations add(int num1,int num2);
		operations sub(int num1,int num2);
		operations multip(int num1,int num2);
		void display()
		{
		cout<<num;	
	    }
};
operations operations::add(int num1,int num2)
{
	int n=num1+num2;
	operations result(n);
	return result;
}
operations operations::sub(int num1,int num2)
{
	int n=num1-num2;
	operations result(n);
	return result;
}
operations operations::multip(int num1,int num2)
{
	int n=num1*num2;
	operations result(n);
	return result;
}
int main()
{
	operations a1;
	cout<<"3+5 =";
	operations res=a1.add(3,5);
	res.display();
	cout<<endl;
	
	operations a2;
	cout<<"3-5 =";
	operations res1=a1.sub(3,5);
	res1.display();
	cout<<endl;
	
	operations a3;
	cout<<"3*5 =";
	operations res2=a1.multip(3,5);
	res2.display();
	cout<<endl;
	
	return 0;
}

