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

int digitFrequency(int num, int digit)
{
    int counter = 0;
    while(num)
    {
        if(num % 10 == digit)
            counter++;
        num /= 10;
    }
    return counter;
}


int main()
{
    int number = readPositiveNumber();
    int digit = readPositiveNumber();

    cout << "Frequency of the digit  " << digit << " is  :  " << digitFrequency(number, digit);
    return 0;
}
