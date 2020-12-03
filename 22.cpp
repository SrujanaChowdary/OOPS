#include<iostream>
using namespace std;
class employee
{
 float salary;
 string name;
 public:
  employee(float sal,string nam)
  {
   salary=sal;
   name=nam;
  }
  void display();
};
void employee::display()
{
 cout<<"salary of employee:";
 cout<<salary<<endl<<"name of the employee:"<<name<<endl;
}
int main()
{
 cout<<"enter how many records u want to store:";
 int n;
 cin>>n;
 employee *e[n];
 for(int i=0;i<n;++i)
 {
  cout<<"enter salary and name of the employee:";
  string name;
  float sal;
  cin>>sal>>name;
  employee *temp=new employee(sal,name);
  e[i]=temp;
 }
 for(int i=0;i<n;++i)
 {
  e[i]->display();
 }
}


