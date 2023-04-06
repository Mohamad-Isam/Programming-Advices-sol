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



int main()
{
    srand((unsigned) time(NULL));
    vector<int> v1 = fillVector(100);
    vector<int> v2 = v1;
    cout << "Array 1 elements are :\n";
    printArray(v1);
    cout << "Array 2 elements are :\n";
    printArray(v2);
    return 0;
}
