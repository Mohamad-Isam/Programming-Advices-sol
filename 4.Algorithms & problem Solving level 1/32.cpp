#include<bits/stdc++.h>
using namespace std;

int readNum()
{
    int num;
    cout << "Enter the number : \n";
    cin >> num;

    return num;
}

int readPower()
{
    int power;
    cout << "Enter the power : \n";
    cin >> power;

    return power;
}

int nToPowerN(int n, int m)
{
    int result = 1;
    while(m)
    {
        result *= n;
        m--;
    }

    return result;
}

void printResult(int result)
{
    cout << "The result = " << result << endl;
}

int main()
{
    printResult(nToPowerN(readNum(), readPower()));
    return 0;
}
