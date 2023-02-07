#include <iostream>
using namespace std;

void readNumbers(int &num1, int &num2, int &num3)
{
    cout << "Enter number 1 :" << endl;
    cin >> num1;
    cout << "Enter number 2 :" << endl;
    cin >> num2;
    cout << "Enter number 3 :" << endl;
    cin >> num3;
}
int maximum(int num1, int num2, int num3)
{
    return num1 > num2 ? num1 > num3 ? num1 : num3 : num2;
}

void printNum(int num)
{
    cout << num << endl;
}

int main()
{
    int num1, num2, num3;
    readNumbers(num1, num2, num3);
    printNum(maximum(num1, num2, num3));
    return 0;
}
