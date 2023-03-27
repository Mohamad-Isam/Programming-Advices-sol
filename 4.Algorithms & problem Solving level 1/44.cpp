#include<bits/stdc++.h>
using namespace std;

int readNumber()
{
    int number = 2;
    do
    {
        if(number < 1 || number > 7)
            cout << "Wrong day\n";
        cout << "Enter the number of the day : ";
        cin >> number;
    }while(number < 1 || number > 8);

    return number;
}

string numberToDay(int number)
{
    switch(number)
    {
    case 1 :
        return "It's Sunday\n";
    case 2 :
        return "It's Monday\n";
    case 3 :
        return "It's Tuesday\n";
    case 4 :
        return "It's Wednesday\n";
    case 5 :
        return "It's Thursday\n";
    case 6 :
        return "It's Friday\n";
    case 7 :
        return "It's Saturday\n";
    }
}


int main()
{
    cout << numberToDay(readNumber());
    return 0;
}
