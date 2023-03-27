#include <bits/stdc++.h>
using namespace std;

struct stTriangle{
    float a, b, c;

};

stTriangle readInfo()
{
    stTriangle stInfo;
    cout << "Enter first side of the triangle : \n";
    cin >> stInfo.a;
    cout << "Enter second side of the triangle : \n";
    cin >> stInfo.b;
    cout << "Enter third side of the triangle : \n";
    cin >> stInfo.c;

    return stInfo;
}

float circleAreaFromTriangle(stTriangle stInfo)
{
    const float PI = 3.14;
    float p = (stInfo.a + stInfo.b + stInfo.c) / 2;
    float area = PI * pow(((stInfo.a * stInfo.b * stInfo.c) / (4 * sqrt(p * (p - stInfo.a) * (p - stInfo.b) * (p- stInfo.c)))), 2) ;
    return area;
}

void printCircle(float area)
{
    cout << "The circle's area is = " << area << endl;
}

int main()
{
    printCircle(circleAreaFromTriangle(readInfo()));
    return 0;
}
