#include <iostream>
using namespace std;

int readNum()
{
    int number;
    cout << "Enter the number :" << endl;
    cin >> number;
    return number;
}

float calculateHalfNum(int num)
{
    return float(num) / 2;
}

void printNum(int num)
{
    string Result = "The half of " + to_string(num) + " is : " + to_string(calculateHalfNum(num));
    cout << Result << endl;
}

int main()
{
    printNum(readNum());
    return 0;
}
