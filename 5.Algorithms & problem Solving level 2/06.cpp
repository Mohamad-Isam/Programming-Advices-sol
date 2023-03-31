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

int sum_of_digits(int num)
{
    int sum = 0;
    while(num)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

void print_sum_of_digits(int num)
{
    cout << "The sum of the digits of " << num << " is :\n" << sum_of_digits(num) << endl;
}

int main()
{
    print_sum_of_digits(readPositiveNumber());
    return 0;
}
