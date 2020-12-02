/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{ 
  int arr[]={1,2,3,4,5};
  int i;
  for(i=0;i<=5;i++)
  {
   cout<<"enter index";
   cin>>i;
   cout<<"value is"<<arr[i]<<endl;
  
  }
   return 0;
}
