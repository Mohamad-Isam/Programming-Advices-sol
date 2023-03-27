#include<bits/stdc++.h>
using namespace std;

int readPIN()
{
    int PIN;

    cout << "Enter the PIN code : \n";
    cin >> PIN;

    return PIN;
}

bool Login()
{
    int PINcode;
    do
    {
        PINcode = readPIN();
        if(PINcode == 1234)
            return true;
        else
        {
            cout << "\nWrong PIN!!!\n";
            system("color 4F");
        }
    }while(PINcode != 1234);

    return false;
}

int main()
{
    if(Login())
    {
        system("color 2F"); //turn screen to green.
        cout << "\nYour total amount balance is " << 7500 << '\n';
    }

    return 0;
}
