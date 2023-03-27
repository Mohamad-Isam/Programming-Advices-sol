#include<bits/stdc++.h>
using  namespace std;

int readNum()
{
    int num;
    cout << "Enter the number : \n";
    cin >> num;

    return num;
}

int powerOf2(int num)
{
    return num * num;
}

int powerOf3(int num)
{
    return num * num * num;
}

int powerOf4(int  num)
{
    return num * num * num * num;
}

void printAllPowers(int num)
{
    cout << num << " to the power of 2  = " << powerOf2(num) << "\n";
    cout << num << " to the power of 3 = " << powerOf3(num) << "\n";
    cout << num << " to the power of 4 = " << powerOf4(num) << "\n";
}

int main()
{
    printAllPowers(readNum());

    return 0;
}
