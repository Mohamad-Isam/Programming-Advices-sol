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


vector<int> readVector()
{
    vector<int> v;
    int x;
    int Size = readPositiveNumber("Enter the size of the array");
    for(unsigned int i = 0; i < Size; i++)
    {
        cout << "Enter array elements : \n";
        cout << "Element [" << i + 1 << "] : ";
        cin >> x;
        v.push_back(x);
    }
    return v;
}

int elementCounter(vector<int> v, int element)
{
    int counter = 0;
    for(int x : v)
        if(x == element)
            counter++;
    return counter;
}

void printArray(vector<int> v)
{
    for(int x : v)
        cout << x << " ";
    cout << '\n';
}

int main()
{
    vector <int> arr = readVector();
    int elementToChack = readPositiveNumber("Enter element to check : ");
    printArray(arr);
    cout << elementToChack << " is repeated " << elementCounter(arr, elementToChack) << " time(s)\n";

    return 0;
}
