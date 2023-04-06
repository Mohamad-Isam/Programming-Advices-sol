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
vector<int> addElements(vector<int> v1)
{
    vector<int> v2;

    for(int num : v1)
        if(isOdd(num))
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
    v1 = fillVector();
    printArray(v1);
    v2 = addElements(v1);
    printArray(v2);


    return 0;
}
