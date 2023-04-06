#include<bits/stdc++.h>
using namespace std;

void addElements(vector<int> &v)
{
    int element, choice;
    do
    {
        cout << "Please enter a number : ";
        cin >> element;
        v.push_back(element);
        cout << "Do you want to add more element ? 0 (no) , 1 (yes) : \n";
        cin >> choice;
    }while(choice);
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
    vector<int> v;
    addElements(v);
    cout << "array size is : " <<  v.size() << '\n';
    printArray(v);
    return 0;
}
