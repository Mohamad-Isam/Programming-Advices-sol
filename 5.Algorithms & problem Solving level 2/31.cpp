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

void shuffleArray(vector<int> &v)
{
    int k;
    for(int i = 0; i < v.size(); i++)
    {
        k = randomNumber(0, 9);
        int temp = v[i];
        v[i] = v[k];
        v[k] = temp;
    }
}

vector<int> fillOrderedNumbers(int number)
{
    vector<int> v;
    for(int i = 1; i <= number; i++)
        v.push_back(i);

    return v;
}

int main()
{
    srand((unsigned) time(NULL));
    vector<int> v1 = fillOrderedNumbers(readPositiveNumber("Enter the maximum number in array : "));
    printArray(v1);
    cout << "After shuffle : \n";
    shuffleArray(v1);
    printArray(v1);

    return 0;
}
