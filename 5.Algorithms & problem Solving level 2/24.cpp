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

int maximumNumber(vector<int> v)
{
    int maximum = v[0];
    for(int i = 1; i < v.size(); i++)
        if(v[i] >  maximum)
            maximum = v[i];

    return maximum;
}


int main()
{
    srand((unsigned) time(NULL));
    vector <int> v = fillVector(readPositiveNumber("size of the array : \n"));
    cout << "Array elements : ";
    printArray(v);

    cout << "Max Number is : " << maximumNumber(v);
    return 0;
}
