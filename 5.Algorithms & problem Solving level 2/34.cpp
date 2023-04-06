#include<bits/stdc++.h>
using namespace std;

int readPositiveNumber(string message)
{
    int num;
    do
    {
        cout << message << '\n';
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

vector<int> fillVector()
{
    vector<int> v;
    for(int i = 0; i < 100; i++)
        v.push_back(randomNumber(1, 100));
    return v;
}
int searchInVector(vector<int> v, int number)
{
    for(int i = 0; i < 100; i++)
    {
        if(v[i] == number)
            return i;
    }
    return -1;
}


int main()
{
    srand((unsigned) time(NULL));
    vector<int> v = fillVector();
    int result = searchInVector(v, readPositiveNumber("Enter the elements you want to find : "));
    printArray(v);
    if(result == -1)
        cout << "Element has not been found \n";
    else
        cout << "Element has been found at position : " << result << '\n';
    return 0;
}
