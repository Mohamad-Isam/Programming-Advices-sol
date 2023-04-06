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
bool searchInVector(vector<int> v, int number)
{
    for(int i = 0; i < 100; i++)
    {
        if(v[i] == number)
            return 1;
    }
    return 0;
}


int main()
{
    srand((unsigned) time(NULL));
    vector<int> v = fillVector();
    int number = readPositiveNumber("Enter the elements you want to find : ");
    bool result = searchInVector(v, number);
    printArray(v);
    cout << "Element you search for is : " << number << '\n';
    cout << (result ? "element has been found\n" : "Elements is NOT found\n");
    return 0;
}
