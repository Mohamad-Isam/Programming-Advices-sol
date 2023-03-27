#include <bits/stdc++.h>
using namespace std;

float readSquareSide()
{
    float A;
    cout << "Enter the square side : \n";
    cin >> A;
    return A;
}

float calculateCircleBySquare(float A)
{
    return 3.14 * A * A / 4;
}
void printCircle(float area)
{
    cout << "The area is = " << area << endl;
}

int main()
{
    printCircle(calculateCircleBySquare(readSquareSide()));
    return 0;
}
