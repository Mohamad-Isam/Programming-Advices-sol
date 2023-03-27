#include <bits/stdc++.h>
using namespace std;

float readCircleCircumference()
{
    float C;
    cout << "Enter circle circumference : \n";
    cin >> C;
    return C;
}

float CalculateCircleAreaByCircumference(float C)
{
    //c = 2*PI * R && A = PI * R * R
    float Area;
    Area = C * C / (4 * 3.14);
    return Area;
}

void PrintCircleArea(float area)
{
    cout << "The circle area is = " << area << endl;
}
int main()
{
    PrintCircleArea(CalculateCircleAreaByCircumference(readCircleCircumference()));

    return 0;
}
