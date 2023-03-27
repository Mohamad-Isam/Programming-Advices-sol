#include<bits/stdc++.h>
using namespace std;

int readAge()
{
    int age;
    cout << "Enter yout age please : \n";
    cin >> age;

    return age;
}

bool validateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

void PrintResult(int age)
{
    if(validateNumberInRange(age, 18, 45))
        cout << "Yes , you are in range\n";
    else
        cout << "No, you aren't in range";
}

int main()
{
    PrintResult(readAge());
    return 0;
}
