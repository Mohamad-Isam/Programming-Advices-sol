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

bool isPrime(int number)
{
    if(number == 0 || number == 1)
        return false;
    for(int i = 2; i <= number / 2; i++)
    {
        if(number % i == 0)
            return false;
    }
    return true;
}

bool searchInVector(vector<int> v, int number)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == number)
            return 1;
    }
    return 0;
}

vector<int> addElements(vector<int> v1)
{
    vector<int> v2;

    for(int num : v1)
        if(!searchInVector(v2, num))
            v2.push_back(num);

    return v2;
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
    vector<int> v1, v2;
    v1 = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90};
    v2 = addElements(v1);
    printArray(v2);


    return 0;
}
