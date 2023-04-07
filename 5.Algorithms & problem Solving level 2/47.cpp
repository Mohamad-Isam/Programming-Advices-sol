#include<bits/stdc++.h>
using namespace std;

float readNumber()
{
    float n;
    cout << "Enter a number : ";
    cin >> n;

    return n;
}

int roundValue(float number)
{
    return number >= 0 ? number + 0.5 : number - 0.5;
}
int main()
{
    float number = readNumber();
    cout << "My round value : " <<  roundValue(number) << '\n';
    cout << "C++ round value : " << round(number) << '\n';
    return 0;
}
