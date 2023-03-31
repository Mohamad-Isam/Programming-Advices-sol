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

int randomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

string generateKey()
{
    string key;
    for(int i = 0; i < 16; i++)
    {
        key += randomNumber(65, 90);
        if(i == 3 || i == 7 || i == 11)
            key += '-';
    }
    return key;
}


void generateKeys(int number)
{
    for(unsigned int i = 1; i <= number; i++)
    {
        cout << "Key [" << i << "] : " << generateKey() << '\n';
    }
}


int main()
{
    srand((unsigned) time(NULL));
    generateKeys(readPositiveNumber());
    return 0;
}
