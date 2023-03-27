#include<bits/stdc++.h>
using namespace std;

int readNum()
{
    int num;
    do
    {
        cout << "Enter positive number  : \n";
        cin >> num;

    }while(num < 0);

    return num;
}

long long factorial(int num)
{
    long long product = 1;

    for(unsigned int i = 1; i <= num ; i++)
        product *= i;

    return product;
}

void printFactorial(long long product)
{
    cout << "The factorial is = " << product << endl;
}


int main()
{
    printFactorial(factorial(readNum()));
    return 0;
}
