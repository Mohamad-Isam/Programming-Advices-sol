#include<bits/stdc++.h>
using namespace std;

int readNumberOfHours()
{
    int hours;
    cout << "Enter Number of hours  :  \n";
    cin >> hours;

    return hours;
}

float hoursToWeeks(int hours)
{
    return 1.0 * hours / (24 * 7);
}

float hoursToDays(int hours)
{
    return 1.0 * hours / 24;
}

int main()
{
    int hours = readNumberOfHours();
    cout << hours << " Hours = " << hoursToWeeks(hours) << " Weeks\n";
    cout << hours << " Hours = " << hoursToDays(hours) << " Days\n";
    return 0;
}
