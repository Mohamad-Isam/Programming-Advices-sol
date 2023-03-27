#include<bits/stdc++.h>
using namespace std;

int readBill()
{
    int number;
    cout << "Enter the bill  :  \n";
    cin >> number;

    return number;
}

float calculateTotal(int number)
{
    float serviceFee = 0.1, salesTax = 0.16;
    number += number * serviceFee;
    return (number + number * salesTax);
}

int main()
{
    cout << calculateTotal(readBill());
    return 0;
}
