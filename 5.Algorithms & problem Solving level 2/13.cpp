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

void print_pattern(int number)
{
    for(int i = 1; i <= number; i++)
    {
        for(int j = i; j >= 1; j--)
            cout << i;
        cout << "\n";
    }
}

int main()
{
    print_pattern(readPositiveNumber());
    return 0;
}
