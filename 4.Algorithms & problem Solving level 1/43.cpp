#include<bits/stdc++.h>
using namespace std;

int readTimeInSeconds()
{
    int seconds;
    cout << "Enter Number of seconds  :  \n";
    cin >> seconds;

    return seconds;
}

int timeInDays(int seconds)
{
    return float(seconds) / (24 * 60 * 60);
}

int timeInHours(int seconds)
{
    return float(seconds) / (60 * 60) - timeInDays(seconds) * 24;
}

int timeInMinutes(int seconds)
{
    return float(seconds) / (60) - timeInHours(seconds) * 60 - timeInDays(seconds) * 24 * 60;
}

int  timeInSeconds(int seconds)
{
    return float(seconds) - timeInHours(seconds) * 60 * 60 - timeInDays(seconds) * 24 * 60 * 60 - timeInMinutes(seconds) * 60;
}



int main()
{
    int seconds = readTimeInSeconds();
    cout << timeInDays(seconds) << ":" << timeInHours(seconds) << ":" << timeInMinutes(seconds) << ":" << timeInSeconds(seconds) << "\n";
    return 0;
}
