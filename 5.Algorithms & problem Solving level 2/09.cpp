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

void printAllDigitsCounter(int number)
{
    int counter = 0;
    for(int i = 0; i < 10; i++)
    {
        counter = digitFrequency(number, i);
        if(counter > 0)
            cout << "Frequency of digit " << i << " is " << counter << endl;
    }
}



int main()
{
    printAllDigitsCounter(readPositiveNumber());
    return 0;
}
