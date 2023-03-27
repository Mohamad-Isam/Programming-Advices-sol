#include<bits/stdc++.h>
using namespace std;

struct stTime
{
    int days, hours, minutes, seconds;
};


stTime readTime()
{
    stTime TimeInfo;
    cout << "Enter the number of days : \n";
    cin >> TimeInfo.days;
    cout << "Enter the number of hours : \n";
    cin >> TimeInfo.hours;
    cout << "Enter the number of minutes : \n";
    cin >> TimeInfo.minutes;
    cout << "Enter the number of seconds : \n";
    cin >> TimeInfo.seconds;

    return TimeInfo;
}

int timeInSeconds(stTime info)
{
    int result = info.seconds + info.minutes * 60 + info.hours * 60 * 60 + info.days * 24 * 60 * 60;
    return result;
}


int main()
{
    cout << timeInSeconds(readTime());
    return 0;
}
