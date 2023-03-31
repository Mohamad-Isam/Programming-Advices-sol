#include<bits/stdc++.h>
using namespace std;

void printTableHeader()
{
    cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";
    cout << "\t";

    for(int i = 1; i <= 10; i++)
        cout << i << "\t";

    cout << "\n____________________________________________________________________________________\n";
}

string Colomnsperator(int i)
{
    return (i < 10) ? "   |" : "  |";
}

void printMultiplicationTable()
{
    printTableHeader();

    for(int i = 1; i <= 10; i++)
    {
        cout << " " <<  i << Colomnsperator(i) << "\t";
        for(int j = 1; j <= 10; j++)
        {
            cout <<  i * j << "\t";
        }
        cout << "\n";
    }
}


int main()
{
    printMultiplicationTable();

    return 0;
}
