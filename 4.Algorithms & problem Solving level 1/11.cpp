#include <iostream>
using namespace std;

struct stNumbers
{
    int num1;
    int num2;
    int num3;
};

stNumbers readNumbers()
{
    stNumbers numbers;
    cout << "Enter first number : " << endl;
    cin >> numbers.num1;
    cout << "Enter second number : " << endl;
    cin >> numbers.num2;
    cout << "Enter third number : " << endl;
    cin >> numbers.num3;

    return numbers;
}

int sumNumbers(stNumbers numbers)
{
    return numbers.num1 + numbers.num2 + numbers.num3;
}

float avrNumbers(stNumbers numbers)
{
    return float(sumNumbers(numbers)) / 3;
}

bool isPass(float avg)
{
    return avg >= 50;
}

void printResult(stNumbers numbers)
{
    cout << numbers.num1 << " + " << numbers.num2 << " + " << numbers.num3 << " = " << sumNumbers(numbers) << endl;
    cout << "The average of the 3 numbers = " << avrNumbers(numbers) << endl;
    if (isPass(avrNumbers(numbers)))
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;
}

int main()
{
    printResult(readNumbers());
    return 0;
}
