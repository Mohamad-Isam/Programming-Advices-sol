#include<bits/stdc++.h>
using namespace std;

void print_pattern()
{
    for(int i = 65; i <= 90; i++)
    {
        for(int j = 65; j <= 90; j++)
        {
            for(int k = 65; k <= 90; k++)
                cout << char(i) << char(j) << char(k) << "\n";
        }
    }
}

int main()
{
    print_pattern();
    return 0;
}
