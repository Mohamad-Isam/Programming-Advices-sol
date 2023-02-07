#include<iostream>
using namespace std;

string readName()
{
  string name;
  cout << "Enter your name :\n"
  getline(cin, name);
  return name;
}

void printName(string name)
{
  cout << "Your name is : " << name << endl;
}


int main()
{
  printName(readName());
  return 0; 
}
