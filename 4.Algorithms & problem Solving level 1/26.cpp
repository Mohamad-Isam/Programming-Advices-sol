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
    for(unsigned int i = 1; i <= num; i++)
        cout << i << "\n";
}


int main()
{
    printNumbers(readNum());
    return 0;
}
