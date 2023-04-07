#include<bits/stdc++.h>
using namespace std;

float readNumber()
{
    float n;
    cout << "Enter a number : ";
    cin >> n;

    return n;
}

int ceilValue(float number)
{
    if(int(number) < number)
        return number + 1;
    else
        return number;
}
int main()
{
    float number = readNumber();
    cout << "My ceil value : " <<  ceilValue(number) << '\n';
    cout << "C++ ceil value : " << ceil(number) << '\n';
    return 0;
}
