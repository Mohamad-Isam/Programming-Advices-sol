#include<bits/stdc++.h>
using namespace std;

int readTotalSales()
{
    int total;
    cout << "Enter the total sales : \n";
    cin >> total;

    return total;
}

int percentage(int total)
{
    if(total > 1000000)
        return 1;
    if(total > 500000)
        return 2;
    if(total > 100000)
        return 3;
    if(total > 50000)
        return 5;
    else
        return 0;
}

float calculateResult(int total)
{
    return total * percentage(total) / 100;
}

void printResult(float result)
{
    cout << "The result is = " << result << "\n";
}

int main()
{
    printResult(calculateResult(readTotalSales()));
    return 0;
}
