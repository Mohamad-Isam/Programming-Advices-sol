#include <bits/stdc++.h>
using namespace std;

void readRadius(float &R)
{
    cout << "Enter the radius of the circle : \n";
    cin >> R;
}
float CircleArea(float R)
{
    return 3.14 * R * R;
}
void printCircleArea(float area)
{
    cout << "The circle Area = " << area << endl;
}

int main()
{
    float R;
    readRadius(R);
    printCircleArea(CircleArea(R));
    return 0;
}
