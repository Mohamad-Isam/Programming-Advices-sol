#include<bits/stdc++.h>
using namespace std;

int readLoanAmount()
{
    int loan;
    cout << "Enter the total loan amount : \n";
    cin >> loan;

    return loan;
}

int readMonths()
{
    int months;
    cout << "Enter the months  : \n";
    cin >> months;

    return months;
}

float calculateMonthlyPayment(int months, int loan)
{
    return float(loan)  /  months;
}


int main()
{
    int loan = readLoanAmount();
    int months = readMonths();
    cout << "Your monthly payment  =  " << calculateMonthlyPayment(months, loan);
    return 0;
}
