#include <iostream>
using namespace std;

struct stInfo
{
    string firstName;
    string lastName;
};

stInfo readName()
{
    stInfo info;
    cout << "Enter first name :\n";
    cin >> info.firstName;
    cout << "Enter last name : \n";
    cin >> info.lastName;

    return info;
}

string getFullName(stInfo info, bool Reverse)
{
    if (Reverse)
        return info.lastName + " " + info.firstName;
    else
        return info.firstName + " " + info.lastName;
}

void printName(string fullName)
{
    cout << "\n Your name is " << fullName << endl;
}

int main()
{
    printName(getFullName(readName(), 1));
    return 0;
}
