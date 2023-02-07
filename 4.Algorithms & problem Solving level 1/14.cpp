#include <iostream>
using namespace std;

void readNumbers(int &num1, int &num2)
{
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;
}

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void printNums(int num1, int num2)
{
    cout << "number 1 = " << num1 << " Number 2 = " << num2 << endl;
}

int main()
{
    int a, b;
    readNumbers(a, b);
    printNums(a, b);
    swap(a, b);
    printNums(a, b);
}
