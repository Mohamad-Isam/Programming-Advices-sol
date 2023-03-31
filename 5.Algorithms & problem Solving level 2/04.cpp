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

bool isPerfect(int num)
{
    int sum = 0;

    for(int i = 1; i <= num / 2; i++)
        if(num % i == 0) sum += i;

    return sum == num;
}

void printPerfects(int n)
{
    cout << "The perfect numbers from 1 TO " << n << " are : \n";
    for(int i = 1; i <= n; i++)
        if(isPerfect(i))
            cout << i << "\t";
}


int main()
{
    printPerfects(readPositiveNumber());
    return 0;
}
