#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> v)
{
    for(int x : v)
        cout << x << " ";
    cout << '\n';
}

int randomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

vector<int> fillVector(int numberOfElements)
{
    vector<int> v;
    for(int i = 0; i < numberOfElements; i++)
        v.push_back(randomNumber(1, 100));
    return v;
}

bool isPrime(int number)
{
    if(number == 0 || number == 1)
        return false;
    for(int i = 2; i <= number / 2; i++)
        if(number % i == 0) return false;

    return true;
}

void copyReverse(vector<int> v1, vector<int> &v2)
{
    for(int i = v1.size() - 1; i >= 0; i--)
    {
        v2.push_back(v1[i]);
    }
}


int main()
{
    srand((unsigned) time(NULL));
    vector<int> v1 = fillVector(100);
    vector<int> v2;
    copyReverse(v1, v2);
    cout << "Array 1 elements are :\n";
    printArray(v1);
    cout << "Array 2 elements are :\n";
    printArray(v2);
    return 0;
}
