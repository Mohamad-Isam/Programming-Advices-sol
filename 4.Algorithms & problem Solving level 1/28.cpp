#include<bits/stdc++.h>
using namespace std;

int readNum()
{
    int Num;
    cout << "Enter a Number :\n";
    cin >> Num;
    cout << "\n\n\n";

    return Num;
}


int sumOfOdd(int num)
{
    int sum = 0;
    while(num)
    {
        if(num % 2 == 1)
            sum += num;
        num--;
    }

    return sum;
}

void printResult(int sum)
{
    cout << "Sum of odd numbers = " << sum << "\n";
}

int main()
{
    printResult(sumOfOdd(readNum()));
    return 0;
}
