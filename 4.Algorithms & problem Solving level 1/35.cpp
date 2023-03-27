#include<bits/stdc++.h>
using namespace std;

struct money{
    int Penny;
    int Nickel;
    int Dime;
    int Quarter;
    int Dollar;
};

money readInfo()
{
    money info;
    cout << "Enter how many pennies you have = ";
    cin >> info.Penny;
    cout << "Enter how many Nickels you have = ";
    cin >> info.Nickel;
    cout << "Enter how many Dimes you have = ";
    cin >> info.Dime;
    cout << "Enter how many Quarters you have = ";
    cin >> info.Quarter;
    cout << "Enter how many Dollar you have = ";
    cin >> info.Dollar;

    return info;
}

float calculateResult(money info)
{
    float result = 0;
    result = info.Dime * 10 + info.Dollar * 100 + info.Nickel * 5 + info.Penny + info.Quarter * 25;

    return result;
}


int main()
{
    float result = calculateResult(readInfo());
    cout << "You have = " << result << " Pennies";
    cout << "You have = " << result / 100 << " Dollar";
    return 0;
}
