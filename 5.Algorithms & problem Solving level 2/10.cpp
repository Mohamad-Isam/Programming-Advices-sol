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

void printDigits(int number)
{
    string s = to_string(number);
    for(int i = 0; i < s.size(); i++)
        cout << s[i] << endl;
}


int main()
{
    printDigits(readPositiveNumber());
    return 0;
}
