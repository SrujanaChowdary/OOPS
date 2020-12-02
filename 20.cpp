#include<iostream>
using namespace std;
class X
{
int n;
float avg;
public:
    X(int p,float q)
{
    n=p;
    avg=q;
}
void disp()
{
    cout<<"\n Roll numbe:- " <<n;
    cout<<"\nAverage :- "<<avg;
}
};
int main()
{
    int a ; float b;
    cout<<"\nEnter the Roll Number";
    cin>>a;
    cout<<"\nEnter the Average";
    cin>>b;
    X x(a,b);               // dynamic initialization
    x.disp();
    return 0;
}
