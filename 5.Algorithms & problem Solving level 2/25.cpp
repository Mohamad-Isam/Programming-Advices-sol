
#include<bits/stdc++.h>
using namespace std;

int readPositiveNumber(string message)
{
    int num;
    do
    {
        cout << message << "\n";
        cin >> num;
    }while(num < 0);

    return num;
}

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

int minimumNumber(vector<int> v)
{
    int minimum = v[0];
    for(int i = 1; i < v.size(); i++)
        if(v[i] <  minimum)
            minimum = v[i];

    return minimum;
}


int main()
{
    srand((unsigned) time(NULL));
    vector <int> v = fillVector(readPositiveNumber("size of the array : \n"));
    cout << "Array elements : ";
    printArray(v);

    cout << "minimum Number is : " << minimumNumber(v);
    return 0;
}
