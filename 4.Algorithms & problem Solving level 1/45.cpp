#include<bits/stdc++.h>
using namespace std;

int readNumber()
{
    int number = 2;
    do
    {
        if(number < 1 || number > 12)
            cout << "Wrong month\n";
        cout << "Enter the number of the day : ";
        cin >> number;
    }while(number < 1 || number > 12);

    return number;
}

string numberToMonth(int number)
{
    switch(number)
    {
    case 1 :
        return "It's January\n";
    case 2 :
        return "It's February\n";
    case 3 :
        return "It's March\n";
    case 4 :
        return "It's April\n";
    case 5 :
        return "It's May\n";
    case 6 :
        return "It's June\n";
    case 7 :
        return "It's July\n";
    case 8 :
        return "It's August\n";
    case 9 :
        return "It's September\n";
    case 10 :
        return "It's October\n";
    case 11 :
        return "It's November\n";
    case 12 :
        return "It's December\n";
    }
}


int main()
{
    cout << numberToMonth(readNumber());
    return 0;
}
