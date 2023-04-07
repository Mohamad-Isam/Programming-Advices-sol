#include<bits/stdc++.h>
using namespace std;

vector<int> fillVector()
{
    return {10, 20, 10};
}

bool isPalindrome(vector<int> v)
{
    int n = v.size();
    for(int i = 0; i < n / 2; i++)
        if(v[i] != v[n - 1 - i])
            return false;

    return true;
}

void printVector(vector<int> v)
{
    cout << "Array elements are : \n";
    for(int x : v)
        cout << x << ' ';
    cout << '\n';
}

int main()
{
    vector<int> v = fillVector();
    printVector(v);
    cout << (isPalindrome(v) ? "Yes, it's Palindrome\n" : "No, it's NOT Palindrome\n");
    return 0;
}
