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
int reverseNum(int num)
{
    int Rnum = 0;
    while(num > 0)
    {
        Rnum = Rnum * 10 +  num % 10;
        num /= 10;
    }
    return Rnum;
}


int main()
{
    cout << reverseNum(readPositiveNumber());
    return 0;
}
