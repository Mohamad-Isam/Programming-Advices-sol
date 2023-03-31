#include<bits/stdc++.h>
using namespace std;

int readPositiveNumber()
{
    int num;
    do
    {
        cout << "Enter positive number : \n";
        cin >> num;
    }while(num < 0);

    return num;
}

bool isPalindrome(int number)
{
    string s = to_string(number);
    int N = s.size();
    for(int i = 0; i < N; i++)
    {
        if(s[i] != s[N - 1 - i])
            return false;
    }
    return true;
}

void print_result(int number)
{
    if(isPalindrome(number))
        cout << "Yes, it is a palindrome\n";
    else
        cout << "No, it is NOT a palindrome\n";
}

int main()
{
    print_result(readPositiveNumber());
    return 0;
}
