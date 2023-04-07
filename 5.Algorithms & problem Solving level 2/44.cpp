#include<bits/stdc++.h>
using namespace std;


int randomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

vector<int> fillVector()
{
    vector<int> v;
    for(int i = 0; i < 100; i++)
        v.push_back(randomNumber(-50, 49));
    return v;
}

bool isPositive(int number)
{
    return number >= 0;
}

int countPositive(vector<int> v)
{
    int counter = 0;
    for(int x : v)
        if(isPositive(x)) counter++;
    return counter;
}

void printArray(vector<int > v)
{
    cout << "Array elements are : \n";
    for(int x : v)
        cout << x << ' ';
    cout << '\n';
}

int main()
{
    srand((unsigned) time(NULL));
    vector<int> v = fillVector();
    printArray(v);
    cout << "Number of Positive numbers is : " << countPositive(v) << '\n';


    return 0;
}
