#include <iostream>
#include <fstream>

using namespace std;

int main(){

  char text[200];

  fstream file;
  file.open ("example.txt", ios::out | ios::in );

  cout << "Write text to be written on file:";
  cin.getline(text, sizeof(text));

  // Writing on file
  file << text << endl;
 cout<<"file content:";
  // Reding from file
  file >> text;
  cout << text << endl;

  //closing the file
  file.close();
  return 0;
}
