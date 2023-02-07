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


void printResult(stNumbers numbers)
{
    cout << numbers.num1 << " + " << numbers.num2 << " + " << numbers.num3 << " = " << sumNumbers(numbers) << endl;
}

int main()
{
    printResult(readNumbers());
    return 0;
}
