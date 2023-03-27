#include <bits/stdc++.h>
using namespace std;


float readDiameter()
{
    float D;
    cout << "Enter the diameter of the circle : \n";
    cin >> D;
    return D;
}

float CircleArea(float D)
{
    const float PI = 3.1415926500;
    return PI * D * D / 4;
}

void printCircle(float area)
{
    cout << "Circle area = " << area << endl;
}
int main()
{
    printCircle(CircleArea(readDiameter()));
    return 0;
}
