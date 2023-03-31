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

bool isPerfect(int num)
{
    int sum = 0;

    for(int i = 1; i <= num / 2; i++)
        if(num % i == 0) sum += i;

    return sum == num;
}

void printResult(int num)
{
    if(isPerfect(num))
        cout << num << " is Perfect";
    else
        cout << num << " is NOT perfect";

}



int main()
{
    printResult(readPositiveNumber());
    return 0;
}
