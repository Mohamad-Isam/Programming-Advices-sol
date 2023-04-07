#include<bits/stdc++.h>
using namespace std;

float readNumber()
{
    float n;
    cout << "Enter a number : ";
    cin >> n;

    return n;
}

float sqrtValue(float number)
{
    return pow(number, 0.5);
}
int main()
{
    float number = readNumber();
    cout << "My aqrt value : " <<  sqrtValue(number) << '\n';
    cout << "C++ sqrt value : " << sqrt(number) << '\n';
    return 0;
}
