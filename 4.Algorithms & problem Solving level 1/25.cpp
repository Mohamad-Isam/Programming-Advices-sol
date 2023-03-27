#include<bits/stdc++.h>
using namespace std;

int readAge()
{
    int age;
    cout << "Enter your age please : \n";
    cin >> age;

    return age;
}

bool validateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

int readUntilNumberBetween(int From, int To)
{
    int age;

    do
    {
        age = readAge();

    }while(!validateNumberInRange(age, 18, 45));

    return age;
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
    PrintResult(readUntilNumberBetween(18, 45));

    return 0;
}
