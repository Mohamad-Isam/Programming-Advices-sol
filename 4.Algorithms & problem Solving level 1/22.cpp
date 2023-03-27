#include <bits/stdc++.h>
using namespace std;

struct triangleInfo{
    float a, b;
};

triangleInfo readInfo()
{
    triangleInfo stInfo;
    cout << "Enter triangle side : \n";
    cin >> stInfo.a;
    cout << "Enter triangle base : \n";
    cin >>  stInfo.b;
    return stInfo;
}

float circleAreaInTriangle(triangleInfo stInfo)
{
    float area = 3.14 * (stInfo.b * stInfo.b / 4) * ((2 * stInfo.a - stInfo.b) / (2 * stInfo.a + stInfo.b));
    return area;

}

void printCircleArea(float area)
{
    cout << "the circle area is = " << area << endl;
}
int main()
{
    printCircleArea(circleAreaInTriangle(readInfo()));
    return 0;
}
