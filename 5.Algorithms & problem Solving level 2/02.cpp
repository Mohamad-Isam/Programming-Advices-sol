#include<bits/stdc++.h>
using namespace std;

int readPositiveNumber()
{
    int num;
    do
    {
        cout << "Enter positive number : \n";
        cin >> num;
    }while(num < 0);

    return num;
}

bool isPrime(int number)
{
    if(number == 0 || number == 1)
        return false;
    for(int i = 2; i <= number / 2; i++)
        if(number % i == 0) return false;

    return true;
}

void printPrimes(int n)
{
    for(int i = 1; i <= n; i++)
        if(isPrime(i))
            cout << i << "\t";
}

int main()
{
    printPrimes(readPositiveNumber());
    return 0;
}
