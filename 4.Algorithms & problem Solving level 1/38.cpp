#include<bits/stdc++.h>
using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number  :  \n";
    cin >> number;

    return number;
}

bool isPrime(int number)
{
    for(int i = 2; i <= number / 2; i++)
    {
        if(number % i == 0)
            return false;
    }
    return true;
}


void printResult(int number)
{
    if(isPrime(number))
        cout << "YES, " << number << " Is a prime number \n";
    else
        cout << "NO, " << number << " it's NOT a prime number\n";
}


int main()
{
    printResult(readNumber());
    return 0;
}
