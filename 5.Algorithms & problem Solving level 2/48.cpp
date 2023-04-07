#include<bits/stdc++.h>
using namespace std;

float readNumber()
{
    float n;
    cout << "Enter a number : ";
    cin >> n;

    return n;
}

int floorValue(float number)
{
    return number >= 0 ? number : number - 1 ;
}
int main()
{
    float number = readNumber();
    cout << "My floor value : " <<  floorValue(number) << '\n';
    cout << "C++ floor value : " << floor(number) << '\n';
    return 0;
}
