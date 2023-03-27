#include<bits/stdc++.h>
using namespace std;

int summing()
{
    int sum = 0;
    int input;
    do
    {
        cin >> input;
        sum += input;

    }while(input != -99);

    return sum + 99;
}

void printResult(int result)
{
    cout << "The sum of all the numbers you entered  =  " << result << "\n";

}

int main()
{
    printResult(summing());

    return 0;
}
