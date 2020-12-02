// C++ program to show passing
// of objects to a function
 #include <iostream>
using namespace std;
class Account 
{
	string a;
public:
     // This function will take
    // an object as an argument
    Account(string s)
    {
    	a=s;
	}
    void FundTransfer1(Account E)//pass by value
    {
        cout<<"You Transferred Money to "<<E.a<<endl;
    }
    void FundTransfer2(Account *E1)//pass by pointer
   {
	     cout<<"You Transferred Money to "<<E1->a<<endl;
   }
    void FundTransfer3(Account &E2)//pass by reference
   {
	    cout<<"You  Transferred  Money to "<<E2.a<<endl;
   }
};
 
// Driver Code
int main()
{
     // Create objects
    Account E("Sender");
    Account E1("rajesh");
    Account E2("Ramesh");
    Account E3("Suresh");
    
    E.FundTransfer1(E1);
    E.FundTransfer2(&E2);
    E.FundTransfer3(E3);
 
    return 0;
}

