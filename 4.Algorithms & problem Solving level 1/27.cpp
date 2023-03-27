#include<bits/stdc++.h>
using namespace std;

int readNum()
{
    int Num;
    cout << "Enter a Number :\n";
    cin >> Num;
    cout << "\n\n\n";

    return Num;
}

void printNumbers(int num)
{
    while(num)
    {
        cout << num-- << "\n";
    }
}

int main()
{
    printNumbers(readNum());
    return 0;
}
