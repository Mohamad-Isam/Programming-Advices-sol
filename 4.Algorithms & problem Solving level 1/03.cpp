#include <iostream>
using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int readNumber()
{
  int x;
  cout << "enter a number :\n"
  cin >> x;
  return x;
}
enNumberType checkNumberType(int num)
{
  int result = num % 2;
  if(result == 0)
    return enNumberType::Even;
  else
    return enNumberType::Odd;
}

void printNumberType(enNumberType numberType)
{
 if(numberType == enNumberType::Even)
   cout << "even number" << endl;
 else
   cout << "odd number" << endl;  
}

int main()
{
  printNumberType(chackeNumberType(readNumber()));  
  
  return 0;
}
