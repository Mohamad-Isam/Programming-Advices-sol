#include<bits/stdc++.h>
using namespace std;

int readTotalBill()
{
    int number;
    cout << "Enter total bill : \n";
    cin >> number;

    return number;
}

int readCashPaid()
{
    int number;
    cout << "Enter cash paid : \n";
    cin >> number;

    return number;
}

int payRemainder()
{
    return readCashPaid() - readTotalBill();
}

int main()
{
    cout << payRemainder() << endl;
    return 0;
}
