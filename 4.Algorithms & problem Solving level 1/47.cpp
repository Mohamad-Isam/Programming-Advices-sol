#include<bits/stdc++.h>
using namespace std;

struct loan
{
    int loanAmount, monthlyPayment;
};

loan readInfo()
{
    loan info;
    cout << "Enter loan amount : \n";
    cin >> info.loanAmount;
    cout << "Enter the monthly payment : \n";
    cin >> info.monthlyPayment;

    return info;
}

int calculateRemainMonths(loan info)
{
    int months  = 0;
    while(info.loanAmount > 0)
    {
        months++;
        info.loanAmount -= info.monthlyPayment;
    }

    return months;
}

int main()
{
    cout << calculateRemainMonths(readInfo()) << " Months\n";
    return 0;
}
