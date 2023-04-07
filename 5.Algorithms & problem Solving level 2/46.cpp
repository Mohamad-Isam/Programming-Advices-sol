#include<bits/stdc++.h>
using namespace std;

int readNumber()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    return n;
}

int absValue(int number)
{
    return (number >= 0 ? number : -number);
}
int main()
{
    int number = readNumber();
    cout << "My abs value : " <<  absValue(number) << '\n';
    cout << "C++ abs value : " << abs(number) << '\n';
    return 0;
}
