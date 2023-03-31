#include<bits/stdc++.h>
using namespace std;

string read_word()
{
    string word;
    cout << "Enter you name:\n";
    cin >> word;

    return word;
}

string Encryption(string name)
{
    for(int i = 0; i < name.size(); i++)
    {
        if(name[i] == 'z')
            name[i] = 'b';
        else if(name[i] == 'Z')
            name[i] = 'B';
        else if(name[i] == 'y')
            name[i] = 'a';
        else if(name[i] == 'Y')
            name[i] = 'A';
        else
            name[i] += 2;
    }

    return name;
}

string Decryption(string name)
{
    for(int i = 0; i < name.size(); i++)
    {
        if(name[i] == 'b')
            name[i] = 'z';
        else if(name[i] == 'B')
            name[i] = 'Z';
        else if(name[i] == 'a')
            name[i] = 'y';
        else if(name[i] == 'A')
            name[i] = 'Y';
        else
            name[i] -= 2;
    }

    return name;
}

int main()
{
    string name = read_word();
    cout << "Text before encryption : " << name << "\n";
    cout << "Text after encryption : " << Encryption(name) << "\n";
    cout << "Text after decryption : " << Decryption( Encryption(name));
    return 0;
}
