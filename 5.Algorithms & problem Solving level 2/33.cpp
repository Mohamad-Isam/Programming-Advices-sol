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

int randomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

string generateKey()
{
    string key;
    for(int i = 0; i < 16; i++)
    {
        key += randomNumber(65, 90);
        if(i == 3 || i == 7 || i == 11)
            key += '-';
    }
    return key;
}

vector<string> fillVectorWithKeys(int numberOfElements)
{
    vector<string> v;
    for(int i = 0; i < numberOfElements; i++)
    {
        v.push_back(generateKey());
    }
    return v;
}

void printKeys(vector<string> keys)
{
    for(int i = 0; i < keys.size(); i++)
    {
        cout << "Array[" << i + 1 << "] : " << keys[i] << '\n';
    }
}

int main()
{
    srand((unsigned) time(NULL));
    vector<string> keys = fillVectorWithKeys(readPositiveNumber("Enter how many keys do you want :"));
    printKeys(keys);
    return 0;
}
