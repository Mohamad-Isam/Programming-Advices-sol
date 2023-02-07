#include<iostream>
using namespace std;

struct stInfo{
  int age;
  bool hasDrivingLicense;  
};

stInfo readInfo()
{
  stInfo info;
  
  cout << "Enter driver's age :\n";
  cin >> info.age;
  cout << "Enter '1' if the driver has a license , '0' if hasn't\n";
  cin >> info.hasDrivingLicense;
  
  return info;
}

bool isAccepted(stinfo info)
{
  return (info.age > 21 && info.hasDrivingLicense);
}

void printResult(stInfo info)
{
  if(isAccepted(info))
    cout << "\nHired" << endl;
  else
    cout << "\nRejected" << endl;  
}

int main(){
  
  printResult(readInfo());
  
  return 0; 
}
