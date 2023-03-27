#include<bits/stdc++.h>
using namespace std;

int readNum1()
{
    int num;
    cout << "Enter first number : \n";
    cin >> num;

    return num;
}

char readOp()
{
    char op;
    cout << "Enter the operation you want to perform  : \n";
    cin >> op;

    return op;
}

int readNum2()
{
    int num;
    cout << "Enter the second number : \n";
    cin >> num;

    return num;
}

int result()
{
    int num1 = readNum1();
    char op = readOp();
    int num2 = readNum2();

    switch(op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '/':
        if(num2 != 0)
            return 1.0 * num1 / num2;
    case '*':
        return num1 * num2;
    default:
        cout << "Unknown operation \n";
        return 0;
    }
}

void printResult()
{
    cout << result() << endl;
}

int main()
{
    printResult();
    return 0;
}
