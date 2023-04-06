#include<bits/stdc++.h>
using namespace std;


int randomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

vector<int> fillVector()
{
    vector<int> v;
    for(int i = 0; i < 10; i++)
        v.push_back(randomNumber(1, 100));
    return v;
}


vector<int> addElements(vector<int> v1)
{
    vector<int> v2;
    int element, choice, i = 0;
    do
    {
        if(i == v1.size())
        {
            cout << "There are no more elements in the array\n";
            break;
        }
        v2.push_back(v1[i++]);
        cout << "Do you want to add more element ? 0 (no) , 1 (yes) : \n";
        cin >> choice;
    }while(choice);
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
    printArray(v1);
    cout << "array size is : " <<  v2.size() << '\n';
    printArray(v2);

    return 0;
}
