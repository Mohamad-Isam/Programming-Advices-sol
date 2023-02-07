#include <iostream>
using namespace std;

void readNumbers(float &a, float &b)
{
    cout << "Enter length of rectangle : ";
    cin >> a;
    cout << "Enter the width of the rectangle : ";
    cin >> b;
}

float calculateArea(float a, float b)
{
    return a * b;
}

void printArea(float area)
{
    cout << "Area of the rectangle is = " << area << endl;
}

int main()
{
    float length, width;
    readNumbers(width, length);
    printArea(calculateArea(width, length));
}
