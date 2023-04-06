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

vector<int> sumOf2Arrays(vector<int> v1, vector<int> v2)
{
    vector<int> v3;
    for(int i = 0; i < v1.size(); i++)
        v3.push_back(v1[i] + v2[i]);

    return v3;
}

int main()
{
    srand((unsigned) time(NULL));
    vector<int> v1 = fillVector(100);
    vector<int> v2 = fillVector(100);
    cout << "Array 1 elements are :\n";
    printArray(v1);
    cout << "Array 2 elements are :\n";
    printArray(v2);

    vector<int> v3 = sumOf2Arrays(v1, v2);

    cout << "Array 3 elements are :\n";
    printArray(v3);
    return 0;
}
