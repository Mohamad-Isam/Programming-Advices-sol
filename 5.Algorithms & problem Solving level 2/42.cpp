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
        v.push_back(randomNumber(1, 100));
    return v;
}

bool isOdd(int number)
{
    return number % 2;
}

int countOdd(vector<int> v)
{
    int counter = 0;
    for(int x : v)
        if(isOdd(x)) counter++;
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
    cout << "Number of odd numbers is : " << countOdd(v) << '\n';


    return 0;
}
