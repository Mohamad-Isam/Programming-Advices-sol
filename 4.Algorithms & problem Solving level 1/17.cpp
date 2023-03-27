#include <bits/stdc++.h>
using namespace std;

struct triangleInfo{
    float a;
    float h;
};

triangleInfo readInfo()
{
    triangleInfo Info;
    cout << "Enter height of the triangle\n";
    cin >> Info.h;
    cout << "Enter the base of the triangle\n";
    cin >> Info.a;
    return Info;
}
float triangleArea(triangleInfo info)
{
    return 0.5 * info.a * info.h;
}

void printTriangleArea(float area)
{
    cout << area << endl;
}

int main()
{

    printTriangleArea(triangleArea(readInfo()));

    return 0;
}
