#include<bits/stdc++.h>
using namespace std;

string read_word()
{
    string word;
    cout << "Enter the password:\n";
    cin >> word;

    return word;
}

void print_pattern(string password)
{
    string word;
    int counter = 1;
    for(int i = 65; i <= 90; i++)
    {
        for(int j = 65; j <= 90; j++)
        {
            for(int k = 65; k <= 90; k++)
            {
                word += char(i);
                word += char(j);
                word += char(k);
                cout << "Trial [" << counter << "] : "<< word << "\n";
                if(word == password)
                {
                    cout << "Password is " << word << "\n";
                    cout << "Found after " << counter << " Trial(s)\n";
                    return;
                }
                word = "";
                counter++;
            }
        }
    }
}

int main()
{
    print_pattern(read_word());
    return 0;
}
