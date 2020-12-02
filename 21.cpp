#include<iostream>
using namespace std;
class matrix
{
            int **a;
public:
            matrix()           // Dynamic Constructor
            {
                        int i,j;
                        a=new int*[3];
                        for(i=0; i<3; i++)
                                    a[i]=new int[3];
                        cout<<"Enter elements for a 3x3 matrix:\n";
                        for(i=0; i<3; i++)
                        for(j=0; j<3; j++)
                                    cin>>a[i][j];
            }
            matrix(matrix & x)     // Copy Constructor
            {
                        int i,j;
                        a=new int*[3];
                        for(i=0; i<3; i++)
                                    a[i]=new int[3];
                        for(i=0; i<3; i++)
                        for(j=0; j<3; j++)
                                    a[i][j]=x.a[i][j];
            }
            ~matrix()                    // Destructor
            {
                        int i;
                        for(i=0; i<3; i++)         delete a[i];
                        delete a;
            }
            void putmatrix();
            friend void add(matrix,matrix);
};
 
void matrix::putmatrix()
{
            int i,j;
            for(i=0; i<3; i++)
            {
                        for(j=0; j<3; j++)
                                    cout<<a[i][j]<<" ";
                        cout<<endl;
            }
}

void add(matrix m1,matrix m2)
{
            int i,j;
            for(i=0; i<3; i++)
            {
                        for(j=0; j<3; j++)
                                    cout<<m1.a[i][j]+m2.a[i][j]<<" ";
                        cout<<endl;
            }
}

int main()
{
            matrix obj1;
            matrix obj2(obj1);
            cout<<"Matrix 1 (and Matrix 2 also):\n";
            obj1.putmatrix();
            cout<<"SUM of the Matrices:\n";
            add(obj1,obj2);
}

