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

void printNumberReversed(int num)
{
    if(num == 0)
        cout << 0;
    while(num)
    {
        cout << num % 10 << "\n";
        num /= 10;
    }
}


int main()
{
    printNumberReversed(readPositiveNumber());
    return 0;
}
