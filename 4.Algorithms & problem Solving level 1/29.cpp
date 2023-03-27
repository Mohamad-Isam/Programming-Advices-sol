#include<bits/stdc++.h>
using namespace std;

int readNum()
{
    int num;
    cout << "Enter the number : \n";
    cin >> num;

    return num;
}


int sumOfEven(int num)
{
    int sum = 0;
    for(int i = 2; i <= num; i += 2)
    {
        sum += i;
    }

    return sum;
}

void printSum(int sum)
{
    cout << "the sum is = " << sum  << endl;
}


int main()
{
    printSum(sumOfEven(readNum()));
    return 0;
}
