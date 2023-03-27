#include <bits/stdc++.h>
using namespace std;

struct rectangleInfo{
    float a;
    float d;
};

rectangleInfo readInfo()
{
    rectangleInfo info;
    cout << "Enter rectangle's side area\n";
    cin >> info.a;
    cout << "Enter rectangle's diagonal\n";
    cin >> info.d;
    return info;
}
float calculateArea(rectangleInfo info)
{
    return info.a * (sqrt(info.d * info.d - info.a * info.a));
}


int main()
{
    cout << calculateArea(readInfo());


    return 0;
}
