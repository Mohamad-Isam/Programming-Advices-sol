#include<bits/stdc++.h>
using namespace std;

string makeLetters()
{
    string result;
    for(int i = 65; i <= 90; i++)
        result += char(i);

    return result;
}

void printResult(string result)
{
    cout << result << endl;
}


int main()
{
    printResult(makeLetters());
    return 0;
}
